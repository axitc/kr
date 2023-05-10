/* did not determine range using standard headers
 * because the book did not explain it yet 
 *
 * using only direct computation */

#include <stdio.h>

main()
{
	signed long	jump;
	signed char	sc;
	unsigned char	uc;
	signed short	ss;
	unsigned short	us;
	signed int	si;
	unsigned int	ui;
	signed long	sl;
	unsigned long	ul;
	signed float	sf;
	unsigned float	uf;
	signed double	sd;
	unsigned double	ud;
	signed long double	sld;
	unsigned long double	uld;

	sc = uc = ss = us = si = ui = sl = ul = sf = uf = sd = ud = 0;

	/*
	while (++sc > 0) ;
	printf("signed char : %d", sc);
	printf(" to %d\n", --sc);

	while (++uc > 0) ;
	printf("unsigned char : %d", uc);
	printf(" to %d\n", --uc);

	while (++ss > 0) ;
	printf("signed short : %d", ss);
	printf(" to %d\n", --ss);

	while (++us > 0) ;
	printf("unsigned short : %d", us);
	printf(" to %d\n", --us);

	while (++si > 0) ;
	printf("signed int : %d", si);
	printf(" to %d\n", --si);

	while (++ui > 0) ;
	printf("unsigned int : %ld", ui);
	printf(" to %ld\n", --ui);

	*//*
	sl = 1;
	signed long min = 0;
	signed long max = 0;
	while ((sl=sl+10000) > 0) {
		printf("%d\n", sl);
		if (sl < min)
			min = sl;
		else if (sl > max)
			max = sl;
	}*/


	while (++sl > 0) printf("%d\n",sl);
	printf("signed long : %ld", sl);
	printf(" to %ld\n", --sl);

	while (++ul > 0) ;
	printf("unsigned long : %ld", ul);
	printf(" to %ld\n", --ul);

	while (++sf > 0) ;
	printf("signed float : %f", sf);
	printf(" to %d\n", --sf);

	while (++uf > 0) ;
	printf("unsigned float : %f", uf);
	printf(" to %d\n", --uf);

	while (++sd > 0) ;
	printf("signed double : %d", sd);
	printf(" to %d\n", --sd);

	while (++ud > 0) ;
	printf("unsigned double : %d", ud);
	printf(" to %d\n", --ud);

	return 0;
}
