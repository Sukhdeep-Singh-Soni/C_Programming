#include<stdio.h>
#include<string.h>
#define MAXLINE 1000  /* maximum input length */

int get_line(char line[], int max);
int strindex(char source[],char searchfor[]);

char pattern[] = "ould";  /* pattern to search for */

/* find all lines matching pattern */
main()
{
    char line[MAXLINE];
    int ret,found = 0;

    while(get_line(line,MAXLINE) > 0)
	if((ret = strindex(line,pattern)) >= 0) {
		printf("%d\n",ret);
	found++;
	}
    return found;
}

/* get_line: get line int s , return length */
int get_line(char s[], int lim)
{
    int c, i;

    i = 0;
    while(--lim > 0 && (c = getchar()) != EOF && c != '\n')
	s[i++] = c;
    if(s[i] == '\n')
	s[i++] = c;
    s[i] = '\0';

    return i;
}

/* strindex: return index of t in s, -1 if none */
int strindex(char s[], char t[])
{
    int i, j, k;

    for(i = strlen(s)-1; i >=0; i--) {
	for(j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++,k++)
	    ;
	if(k > 0 && t[k] == '\0')
	    return i;
    }
    return -1;
}


/*
another way of strindex last position
pos = -1
for(i=0;s[i]!='\0';i++) {
   for(j=i,k=0;t[k]!='\0'&&s[j]==t[k];j++,k++)
	;
	if(k>0&&t[k]=='\0')
	   pos = i;
}
return pos;
*/
