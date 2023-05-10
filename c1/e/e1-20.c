#include <stdio.h>

#define TABLEN	8

main()
{
	/* to track character postion to know how far tab is
	 * values range from 0 to TABLEN-1*/
	int charPosTracker = 0;
	int c;

	while ((c=getchar()) != EOF) {
		if (c == '\t') {
			while (charPosTracker < TABLEN) {
				putchar(' ');
				++charPosTracker;
			}
		} else {
			putchar(c);
			++charPosTracker;
		}
		
		/* that c=='\n' condition is easy to miss !*/
		if (charPosTracker >= TABLEN || c == '\n')
			charPosTracker = 0;
	}
		return 0;
}
