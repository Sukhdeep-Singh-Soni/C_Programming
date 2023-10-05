/*Program to print the length of the string*/
#include<stdio.h>
int strlength(char s[]);
main(){
	char msg[] = "hello, world";
	printf("%d\n",strlength(msg));
}//end of main


int strlength(char s[]){
	int i;
	i=0;
	while(s[i] != '\0')
		++i;
	//--i; //can use to exclude the null char at last
	return i;
}//end of strlen
