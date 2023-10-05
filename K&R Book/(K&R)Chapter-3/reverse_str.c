/*reverse string function program 2nd version*/
#include<stdio.h>
#include<string.h>
void reverse_str(char s[]);
main(){
	char str[] = "BringmeBack";
	reverse_str(str);
}//end of main

/*reverse_str function*/
void reverse_str(char s[]){
	int i,j,c;
	for(i=0,j=strlen(s)-1;i<j;i++,j--)
		c=s[i], s[i]=s[j], s[j]=c;
	/*	{
			c = s[i];
			s[i] = s[j];
			s[j] = c;
		} */
	printf("%s",s);
}//end of reverse_str

