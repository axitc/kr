#include <stdio.h>
#define MAXLINE 1000
#define MINLINE 80

int getlin(char line[], int maxline);

main()
{
	int len;
	char line[MAXLINE];

	while ((len = getlin(line, MAXLINE)) > 0)
		if (len >= MINLINE)
			printf("%s",line);
	return 0;
}

int getlin(char s[], int lim)
{
	int c, i;

	for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
