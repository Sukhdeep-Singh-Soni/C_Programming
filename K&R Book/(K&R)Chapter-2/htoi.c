/*convert a string of hexadecimal digits to its 
		equivalent integer value*/
#include<stdio.h>
#define YES 1
#define NO 0
#define MAX 100
int htoi(char s[]);
main(){
	int c,i=0;
	char s[MAX];
	while((c = getchar()) != '\n'){
		s[i] = c;
		++i;
		}
		if(c == '\n')
			s[i] = '\0';
		
	printf("%d\n",htoi(s));
}//end of main

int htoi(char s[]){
	int i=0,hexdigit,n=0,inhex=YES;
	if(s[i] == '0'){
		++i;		
		if(s[i] == 'x' || s[i] == 'X')
		++i;
	}
	while(s[i] != '\0'){
		if(s[i] >= '0' && s[i] <= '9')
			hexdigit = s[i] - '0';
		else if(s[i] >= 'a' && s[i] <= 'f')
			hexdigit = s[i] - 'a' + 10;
		else if(s[i] >= 'A' && s[i] <= 'F')
			hexdigit = s[i] - 'A' + 10;
		else {
			printf("Invalid hex!");
			break;
			}
		//if(inhex == YES)
			n = 16 * n + hexdigit;
		++i;
	}//end of while of htoi
	return n;
}//end of htoi func

