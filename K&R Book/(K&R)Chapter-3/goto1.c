/*same program as goto.c but without goto*/
#include<stdio.h>
main(){
int a[10] = {0,1,2,3,4,5,6,7,8,9};
int b[10] = {11,22,33,44,55,66,77,88,99,0};
int i,j,found=0;
	for(i=0;i<10 && !found;i++)
		for(j=0;j<10 && !found;j++)
			if(a[i] == b[j])
				found = 1;
	if(found)
	printf("found");
}
