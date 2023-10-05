#include<stdio.h>
#include<ctype.h>
#define MAXLINE 100
main(){
    double sum, atof(char s[]);
    char line[MAXLINE];
    int get_line(char line[], int max);

    sum = 0;
    while(get_line(line,MAXLINE) > 0)
	    printf("\t%g\n", sum += atof(line));
    return 0;
}//end of main


/*atof: convert string s to double*/
double atof(char s[])
{
   int i,sign;
   double val,power;

    for(i = 0; isspace(s[i]); i++)	/*skip spaces*/
	;
    sign = (s[i] == '-')? -1 : 1;
    if(s[i] == '+' || s[i] == '-')
	++i;
    for(val = 0.0; isdigit(s[i]); i++)
	val = 10.0 * val + (s[i] - '0');
    if(s[i] == '.')
	++i;
    for(power = 1.0; isdigit(s[i]); i++) {
	val = 10.0 * val + (s[i] - '0');
	power *= 10;
    }
    return sign * val / power;
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
