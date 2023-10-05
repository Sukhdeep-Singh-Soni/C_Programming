/*program to convert upper case character to lowercase*/
#include<stdio.h>
int lower(int c);
main(){
	int c = 'H';
	printf("%c\n",lower(c));
}//end of main

/*convert function*/
int lower(int c){
	if(c >= 'A' && c <= 'Z')
		return c = c + 'a' - 'A';
	else
		return c;
}//end of lower func
