#include <stdio.h>

#define RANGE 'z'-'a'+1

main()
{
	int c, i, j;
	int chardata[RANGE];

	for (i = 0; i < RANGE; ++i) {
		chardata[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c >= 'a' && c <= 'z') {
			++chardata[c-'a'];
		}
	}

	for (i = 0; i < RANGE; ++i) {
		putchar('a'+i);
		putchar(' ');
		for (j = 0; j < chardata[i]; ++j) {
			putchar('=');
		}
		putchar('\n');
	}
}
