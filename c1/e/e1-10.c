/* Note : this code does not work on consecutive tabs and \ */

#include <stdio.h>

main()
{
	int c, flag;

	while ((c = getchar()) != EOF) {
		flag = 0;

		if (c == '\t') {
			flag = 't';
		}
		if (c == '\\') {
			flag = '\\';
		}
		if (c == '\b') {
			flag = 'b';
		}

		if (flag) {
			putchar('\\');
			putchar(flag);
		}
		else {
			putchar(c);
		}
	}
}
