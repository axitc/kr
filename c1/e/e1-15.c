#include <stdio.h>

#define LOWER	0
#define UPPER	300
#define STEP	30

float ftoc(float f);

main()
{
	float f;

	f = LOWER;
	while (f <= UPPER) {
		printf("%6.2f %8.2f\n", f, ftoc(f));
		f = f + STEP;
	}
	return 0;
}

float ftoc(float f)
{
	return (5.0/9.0)*(f-32.0);
}
