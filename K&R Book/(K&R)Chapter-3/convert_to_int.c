/*atoi 2nd version*/
#include<stdio.h>
#include<ctype.h>
int ascii_to_int_new(char v[]);
main(){
	int c,i;
	char s[100];
	while((c = getchar()) != EOF)
		s[i++] = c;
	printf("%d\n",ascii_to_int_new(s));
}//end of main

/*atoi function*/
int ascii_to_int_new(char s[]){
	int i,n,sign;
	for( i = 0 ; isspace(s[i]) ; i++)
		;
	sign = ( s[i] == '-' ) ? -1 : 1;
	if(s[i] == '+' || s[i] == '-')
		++i;
	for( n = 0 ; isdigit(s[i]) ; i++)
		n = 10 * n + (s[i] - '0');
	return sign * n;
}//end of atoi func

