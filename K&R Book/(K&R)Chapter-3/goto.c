/*goto example to check whether 2 arrays a and b have  elements in common*/
#include<stdio.h>
main(){
 int a[10] = {0,1,2,3,4,5,6,7,8,9}; 
 int b[10] = {11,12,13,14,15,16,17,18,19,0};
 int i,j;
	for(i=0;i<10;i++)
		for(j=0;j<10;j++);
			if(a[i] == b[j])
				goto found;

	found:
		printf("found");
}
