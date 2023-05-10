#include <stdio.h>
#include <time.h>

void delay(int sec)
{
	clock_t start = clock();
	while (clock() < (start + (sec * 1000)))
		;
}

main()
{
	for (int i = 0; i < 10; ++i) {
		putchar('a'+i);
		putchar('\n');
		delay(3000);
	}
}
