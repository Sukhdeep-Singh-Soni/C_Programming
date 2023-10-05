/*program to concat string t to string s , s should be big enough to hold t*/
#include<stdio.h>
void string_concat(char s[],char t[]);
main(){
	char s[] = "hello";
	char t[] = " world!";
	string_concat(s,t);
}//end of main

/*strcat function*/
void string_concat(char s[], char t[]){
	int i,j;
	i = j = 0;
	while(s[i] != '\0')
		++i;
	while((s[i++] = t[j++]) != '\0')
		;
	printf("%s",s);
}//end of string_concat function
