/*print n elements  of an array 10 elements per line with each
	column seperated by a blank and each line terminated by a newline*/
#include<stdio.h>
main(){
	int i,n=30,str[n];
	for(i =0 ; i < n ; i++)
		str[i] = i;
	for(i=0;i<n;i++)
		printf("%6d%c",str[i],(i%10 == 9 || i == n-1) ? '\n' : ' ');
}
