/*itoa modified with the support of -(2^wordsize-1) value which was not possible with previous prog.
	2nd version*/
#include<stdio.h>
#include<string.h>
#define abs(x)	((x) < 0 ? -(x) : (x))
void itoa_mod(char s[], int n);
main(){
	char s[100];
	int n = -5676;
	itoa_mod(s,n);
}

/*itoa: convert n to characters of string*/
void itoa_mod(char s[], int n){
	void reverse(char s[]);
	int i,sign;
	i=0;
	sign = n;
	do {
	   s[i++] = abs(n % 10) + '0';
	}while((n /= 10) != 0);
	if(sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

/*reverse: reverse the string*/
void reverse(char s[]){
	int i,j,c;
	for(i=0,j=strlen(s)-1; i<j; i++,j--)
	{	c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	printf("%s\n",s);
}
