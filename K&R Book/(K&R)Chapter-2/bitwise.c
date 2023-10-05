/*program to & and make the last 6 digits 1 in a octal number*/
#include<stdio.h>
#define SET_ON 1
main(){
int n=0370;
printf("n before AND %d\n",n);
	n = n & 0177;
printf("n after AND %d\n",n);

}
