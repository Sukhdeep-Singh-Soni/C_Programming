/*acsii to int conversion function*/
#include<stdio.h>
int ascii_to_int(char s[]);
main(){
	char str[] = "37555";
	printf("%d\n",ascii_to_int(str));
}//end of main

int ascii_to_int(char s[]){
	int i,n;
	for(i = 0 ; s[i] >= '0' && s[i] <= '9' ; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}//end of ascii_to_int function
