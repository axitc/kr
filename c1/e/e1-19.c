#include <stdio.h>
#define MAXLINE 1000

int getlin(char line[], int maxline);
void reverse(char s[], int n);

main()
{
	int len;
	char line[MAXLINE];

	while ((getlin(line, MAXLINE)) > 0)
		printf("%s", line);

	return 0;
}

int getlin(char s[], int lim)
{
	int c, i;

	for (i = 0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;

	reverse(s, i);

	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	return i;
}

void reverse(char s[], int n)
{
	int i;
	char temp;

	for (i = 0; i < n/2; ++i) {
		temp = s[i];
		s[i] = s[n-i-1];
		s[n-i-1] = temp;
	}
}
