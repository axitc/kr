/* does not take tabs into consideration
 * bit rough around full word case*/

#include <stdio.h>

#define MAXLINELEN	20

main()
{
	int c;
	int linelen;
	char word[MAXLINELEN];
	int wordlen;

	linelen = wordlen = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n') {
			if (wordlen + linelen > MAXLINELEN) {
				putchar('\n');
				linelen = 0;
			}
			for (int i = 0; i < wordlen; ++i)
				putchar(word[i]);

			linelen = linelen + wordlen;
			wordlen = 0;

			if (linelen == MAXLINELEN) {
				putchar('\n');
				linelen = 0;
			}
			putchar(c);
			++linelen;
		}
		else {
			word[wordlen] = c;
			++wordlen;

			if (wordlen == MAXLINELEN) {
				putchar('\n');
				for (int i = 0; i < MAXLINELEN; ++i)
					putchar(word[i]);
				putchar('\n');
				linelen = wordlen = 0;
			}
		}
		if (c == '\n')
			linelen = wordlen = 0;
	}
	return 0;
}
