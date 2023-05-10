/* error's element identification faulty */

#include <stdio.h>

#define YES		1
#define NO		0
#define MAXTOKENS	100

main()
{
	int c;

	int nline;
	int error;
	int possibleerrorline;

	char pairstack[MAXTOKENS];
	int index;

	int iscommentpossible;
	int iscomment;
	int iscommentendpossible;
	int isstring;
	int ischarconst;
	int isnextcharescape;

	nline = possibleerrorline = index = 0;
	error = iscommentpossible = iscomment = iscommentendpossible = isstring = ischarconst = isnextcharescape = NO;

	while (((c=getchar())!=EOF) && !error) {
		if (c == '\n')
			++nline;

		/* end & in-between element pair control block */
		else if (iscomment) {
			if (iscommentendpossible) {
				iscommentendpossible = NO;
				if (c == '/') {
					iscomment = NO;
					--index;
				}
			}
			else if (c == '*')
				iscommentendpossible = YES;
		}
		else if (isstring) {
			if (isnextcharescape)
				isnextcharescape = NO;
			else if (c == '\\')
				isnextcharescape = YES;
			else if (c == '\"') {
				isstring = NO;
				--index;
			}
		}
		else if (ischarconst) {
			if (isnextcharescape)
				isnextcharescape = NO;
			else if (c == '\\')
				isnextcharescape = YES;
			else if (c == '\'') {
				ischarconst = NO;
				--index;
			}
		}

		/* pair opening element control block*/
		else if (c == '\"') {
			isstring = YES;
			pairstack[index++] = c;
			possibleerrorline = nline;
		}
		else if (c == '\'') {
			ischarconst = YES;
			pairstack[index++] = c;
			possibleerrorline = nline;
		}
		else if (iscommentpossible) {
			iscommentpossible = NO;
			if (c == '*') {
				iscomment = YES;
				pairstack[index++] = c;
				possibleerrorline = nline;
			}
		}
		else if (c == '/')
			iscommentpossible = YES;

		/* braces opening control block */
		else if (c=='(' || c=='[' || c=='{') {
			pairstack[index++] = c;
			possibleerrorline = nline;
		}

		/* braces closing control block */
		else if (c == ')') {
			if (pairstack[--index] != '(')
				error = YES;
		}
		else if (c == ']') {
			if (pairstack[--index] != '[')
				error = YES;
		}
		else if (c == '}') {
			if (pairstack[--index] != '{')
				error = YES;
		}
	}

	/* final judgement */
	if (error || index)
		printf("%c error at line %d\n", pairstack[index], possibleerrorline);
	else
		printf("no error detected\n");

	return 0;
}
