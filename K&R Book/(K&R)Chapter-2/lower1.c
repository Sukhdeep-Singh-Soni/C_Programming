/*lower function to change uppercase characters o lowercase without if-else and using conditional
	operator
	2nd version (modified)*/
#include<stdio.h>
int lower_mod(int c);
main(){
	int c = 'H';
	printf("%c",lower_mod(c));
}//end of main

/*lower function with conditional op*/
int lower_mod(int c){
	return (c >= 'A' && c <= 'Z') ? c = c + 'a' - 'A' : c;
}
