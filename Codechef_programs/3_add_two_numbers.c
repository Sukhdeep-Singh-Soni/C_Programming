#include<stdio.h>
#define MAX 1000
main()
{
	int n,a,b,sum[MAX],i=0,j;

	scanf("%d",&n);
	while(n--) {
		scanf("%d %d",&a,&b);
		sum[i++] = a + b;
	}
	printf("\n");
	for(j = 0; j < i; j++)
		printf("%d\n",sum[j]);
}
