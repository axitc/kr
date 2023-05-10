#include <stdio.h>
#define MAXLINE 20

int getlin(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getlin(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		printf("%s\n%d\n", longest, max);
	return 0;
}

int getlin(char s[], int lim)
{
	int c, i;

	for (i = 0; (c=getchar())!=EOF && c!='\n'; ++i)
		if (i < lim-1)
			s[i] = c;
	if (i <= lim-1 && c=='\n') {
		s[i] = c;
		++i;
		s[i] = '\0';
	}
	else {
		s[lim-1] = '\0';
	}
	return i;
}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
