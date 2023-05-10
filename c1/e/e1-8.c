#include <stdio.h>

main()
{
	int c;
	int cb, ct, cn;

	cb = 0;
	ct = 0;
	cn = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++cb;
		if (c == '\t')
			++ct;
		if (c == '\n')
			++cn;
	}

	printf("blanks : %d\n", cb);
	printf("tabs : %d\n", ct);
	printf("newlines : %d\n", cn);
}
