#include<stdio.h>
#define MAXLINE 1000

int get_line(char line[], int lim);
void copy(char to[],char from[]);
main()
{
	int len;
	char line[MAXLINE],longest[MAXLINE];
	int max=0;

	while((len = get_line(line,MAXLINE)) > 0){
		printf("%d %s\n",len, line);
		if(len > max) {
			max = len;
			copy(longest,line);
		}
	}
	if(max > 0)
		printf("%s\n",longest);
}

int get_line(char s[], int lim) {
	int i,c,j;
	j = 0;
	for(i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
		if(i < lim-2){
			s[j] = c;
			++j;
		}
	}
	if(c == '\n') {
		s[j] = c;
		++j;
		++i;
	}
	s[j] = '\0';
	return i;
}

void copy(char to[], char from[]) {
	int i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}

