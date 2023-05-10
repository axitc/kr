#include <stdio.h>

main()
{
	float cel, fah;
	int upper, lower, step;

	lower = 12;
	upper = 60;
	step = 9;

	printf("Fahrenheit to Celsius\n");
	printf("Fah    Cel\n");
	fah = lower;
	while (fah <= upper) {
		cel = (5.0/9.0) * (fah-32.0);
		printf("%3.0f %6.1f\n", fah, cel);
		fah = fah + step;
	}
}
