#include<stdio.h>
#include<string.h>
void itob(int n, char s[], int b);
main(){
	char s[100];
	int n = 5678;
	itob(n,s,16);
}//end of main

/*itob: converts int n to specified base(b) eg b = 16*/
void itob(int n, char s[], int b){
	void reverse(char s[]);
	int i,j,sign;
	i=0;
	if((sign  = n) < 0 )
		n = -n;

	do {
		j = n % b;
		s[i++] = (j <= 9) ? j+'0':j+'a'-10;
	}while((n /= b) > 0);
	if(sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

/*reverse*/
void reverse(char s[]){
	int i,j,c;
	for(i=0,j=strlen(s)-1;i<j;i++,j--)
		c=s[i],s[i]=s[j],s[j]=c;
	printf("%s\n",s);
}
