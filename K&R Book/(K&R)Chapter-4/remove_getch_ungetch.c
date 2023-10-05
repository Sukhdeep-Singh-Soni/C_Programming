#include<stdio.h>
#include<ctype.h>

#define MAXLINE 100
#define NUMBER '0'

int get_line(char line[], int limit);

int li = 0;
char line[MAXLINE];


/*getop: get next operator or numeric operand*/
int getop(char s[])
{
	int c,i;

	if(line[li] == '\0')
		if(getline(line,MAXLINE) == 0)
			return EOF;
		else
			li = 0;
	while((s[0] = c = line[li++]) == ' ' || c == '\t')
		;
	s[1] = '\0';
	if(!isdigit(c) && c != '.')
		return c;
	i = 0;
	if(isdigit(c))
		while(isdigit(s[++i] = c = line[li++]))
			;
	if(c == '.')
		while(isdigit(s[++i] = c = line[li++]))
			;
	s[i] = '\0';
	li--;
	return NUMBER;
}

/*get_line: get a line of input*/
int get_line(char line[],int lim)
{
	int i,c;

	for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
		line[i] = c;
	if(c == '\n')
		s[i++] = c;
	s[i] = '\0';

	return i;
}
