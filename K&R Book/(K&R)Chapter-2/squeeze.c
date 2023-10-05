/*Program to remove all occurences of character c from a string s*/
#include<stdio.h>
void squeeze(char s[],int c);
main(){
 char str[] = "this is a sting with al lots of c's there are cats cabinet cc as in gcc";
	squeeze(str,'c');
}//end of main

void squeeze(char s[],int c) {
	int i,j;	
	for( i = j = 0 ; s[i] != '\0' ; i++)
		if(s[i] != 'c')
			s[j++] =s[i];
	s[i] = '\0';
	printf("%s",s);
}//end of squeeze

