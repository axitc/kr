/* This code is badly designed in hurry
 * I will make sure its elegant once again
 * tabPossible is redundant, nwhite's information is enough
 * poorly designed conditionals */

#include <stdio.h>

#define TRUE	1
#define FALSE	0
#define TABLEN	8

main()
{
	int c;
	int tabCycleTracker;
	int tabPossible;
	int nwhite;

	nwhite = 0;
	tabCycleTracker = 0;
	tabPossible = FALSE;

	while ((c = getchar()) != EOF) {
		++tabCycleTracker;
		if (tabCycleTracker > TABLEN || c == '\n')
			tabCycleTracker = 0;

		if (c == ' ')
			tabPossible = TRUE;

		if (tabPossible && tabCycleTracker == TABLEN) {
			putchar('\t');
			tabPossible = FALSE;
			nwhite = 0;
		}

		if (c != ' ') {
			tabPossible = FALSE;
			for ( ; nwhite > 0; --nwhite)
				putchar(' ');
			putchar(c);
		}
		else
			++nwhite;
	}
	return 0;
}
