#include<stdio.h>
main(){
	int i;
	int a[5] = {1,-2,3,-40,5};
/*	for(i=0;i<5;i++)
		if(a[i] < 0)
		continue;
		else
			printf("%d",a[i]);
*/
/*for(i=0;i<10;i+=2)
	if(i == 3)
		continue;
	else
		printf("%d ", i);
*/
i=0;
while(++i<10)
	if(i == 3){
	continue;
	printf("%d ", i);
	}
}
