#include<stdio.h>
#define MAXLINE 1000

int get_line(char [],int);
main()
{
	int len;
	char line[MAXLINE];
	printf("%d\n",len = get_line(line,MAXLINE));
}

int get_line(char s[], int lim) {
	int i,c;

	for(i = 0; i < lim - 1; i++)
		if((c = getchar()) != EOF)
			if(c != '\n')
				s[i] = c;
			else
				break;
		else
			break;

	if(c == '\n')
		s[i++] = '\n';
	s[i] = '\0';
	return i;
}

/*version 2
enum loop {NO, YES};
enum loop okloop = YES;
int i = 0;
while(okloop == YES) {
	if(i >= lim - 1)
		okloop = NO;
	else if((c = getchar()) == EOF)
		okloop = NO;
	else if(c == '\n')
		okloop = NO;
	else {
		s[i] = c;
		++i;
	}
}*/
