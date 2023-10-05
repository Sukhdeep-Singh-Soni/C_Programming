#include<stdio.h>
#include<string.h>
void itoa_3v(char s[], int n, int w);	/*3rd Version if itoa function*/
main(){
	char s[100];
	int n = 5674,w=10;
	itoa_3v(s,n,w);
}//end of main

/*itoa_3v*/
void itoa_3v(char s[], int n, int w){
	void reverse(char s[]);
	int i,sign;
	if((sign = n) < 0)
		n = -n;
	i=0;
	do {
	s[i++] = n % 10 + '0';
	}while((n /= 10) > 0);
	if(sign < 0)
		s[i++] = '-';
	while(i < w)
		s[i++] = ' ';
	s[i] = '\0';
	reverse(s); 
}//end of itoa_3v

/*reverse*/
void reverse(char s[]){
	int i,j,c;
	for(i=0,j=strlen(s)-1;i<j;i++,j--)
		c=s[i],s[i]=s[j],s[j]=c;
	printf("%s",s);
}

