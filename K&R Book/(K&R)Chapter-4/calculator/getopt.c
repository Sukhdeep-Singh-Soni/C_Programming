#include<stdio.h>
#include<ctype.h>
#include "calc.h"

int getopt(char s[])
{
	int i,c;

	while((s[0] =  c = getch()) == ' ' || c == '\t')
		;
	s[1] = '\0';
	while(!isdigit(c) && c != '.')
		return c;	/*not a number*/
	i = 0;
	while(isdigit(c))
		while(isdigit(s[++i] = c = getch()));
	if(c == '.')
		while(isdigit(s[++i] = c = getch()));
	s[i] = '\0';

	if(c != EOF)
		ungetch(c);
	return NUMBER;
}
