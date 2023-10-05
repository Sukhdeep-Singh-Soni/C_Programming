/*invert function to atoi converting int to ascii*/
#include<stdio.h>
#include<string.h>
void int_to_ascii(int n, char s[]);
void reverse(char s[]);
main(){
	int n=-5676;
	char s[10];
	int_to_ascii(n,s);
	printf("%s",s);
}//end of main

/*int_to_ascii function*/
void int_to_ascii(int n, char s[]){
	int sign,i;
	if((sign = n) < 0)
		n = -n;
	i=0;
	do { /*generate bits in reverse order*/
		s[i++] = n % 10 + '0';  /*get last digit*/
	} while((n /= 10) > 0);		/*remove last digit*/
	if(sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}//end of int_to_ascii

void reverse(char s[]){
	int i,j,c;
	for(i=0,j=strlen(s)-1;i<j;i++,j--)
		c=s[i],s[i]=s[j],s[j]=c;
}//end of reverse
