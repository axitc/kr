#include <stdio.h>
#define MAXLINE 1000

int gettrimmedline(char line[], int maxline);

main()
{
	char line[MAXLINE];

	while ((gettrimmedline(line, MAXLINE)) > 0)
		if (line[0] != '\n')
			printf("%s", line);

	return 0;
}

int gettrimmedline(char s[], int lim)
{
	int c, i;

	/* get input */
	for (i = 0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	
	/* trim trailing whitespaces */
	while (i>0 && (s[i-1] == ' ' || s[i-1] == '\t'))
		--i;

	if (c == '\n')
		s[i++] = '\n';

	s[i] = '\0';
	return i;
}
