/* worked in first run hahaah !
 * i think more elegant solution may be possible, but i am kinda satisfied */

#include <stdio.h>

#define YES	1
#define NO	0

main()
{
	int c;
	int isstring;
	int nextcharisescape;
	int iscommentpossible;
	int iscomment;
	int iscommentendpossible;

	isstring = nextcharisescape = iscommentpossible = iscomment = iscommentendpossible = NO;

	while ((c=getchar()) != EOF) {
		if (isstring) {
			if (nextcharisescape)
				nextcharisescape = NO;
			else if (c == '\\')
				nextcharisescape = YES;
			else if (c == '\"')
				isstring = NO;
			putchar(c);
		}
		else if (iscomment) {
			if (iscommentendpossible) {
				iscommentendpossible = NO;
				if (c == '/')
					iscomment = NO;
			}
			else if (c == '*')
				iscommentendpossible = YES;
		}
		else if (c == '\"') {
			isstring = YES;
			putchar(c);
		}
		else if (iscommentpossible) {
			iscommentpossible = NO;
			if (c == '*')
				iscomment = YES;
			else {
				putchar('/');
				putchar(c);
			}
		}
		else if (c == '/')
			iscommentpossible = YES;
		else
			putchar(c);
	}
	return 0;
}
