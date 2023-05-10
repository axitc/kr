#include <stdio.h>

main()
{
	float cel, fah;
	int low, up, step;

	low = 0;
	up = 54;
	step = 6;

	cel = low;
	while (cel <= up) {
		fah = (cel * 9.0/5.0) + 32.0;
		printf("%3.0f %6.1f\n", cel, fah);
		cel = cel + step;
	}
}
