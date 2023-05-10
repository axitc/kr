#include <stdio.h>

#define IN	1
#define OUT	0
#define CAP	8

main()
{
	int c, state, wordlen, i, j, maxwordlen;
	int lendata[CAP];

	for (i = 0; i < CAP; ++i)
		lendata[i] = 0;

	state = OUT;
	wordlen = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN) {
				if (wordlen <= CAP) {
					++lendata[wordlen-1];
				}
				wordlen = 0;
				state = OUT;
			}
		}
		else {
			++wordlen;
			state = IN;
		}
	}

	maxwordlen = 0;
	for (i = 0; i < CAP; ++i) {
		if (maxwordlen < lendata[i]) {
			maxwordlen = lendata[i];
		}
		for (j = 0; j < lendata[i]; ++j) {
			putchar('=');
		}
		putchar('\n');
	}

	for (i = maxwordlen-1; i >= 0; --i) {
		for (j = 0; j < CAP; ++j) {
			if (lendata[j] > i) {
				putchar('*');
			}
			else {
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
