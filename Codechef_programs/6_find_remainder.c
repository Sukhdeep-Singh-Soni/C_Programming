#include<stdio.h>
#define MAX 1000

main()
{
	int a,b,n,i=0,sum[MAX];

	scanf("%d",&n);
	while(n--) {
		scanf("%d %d",&a,&b);
		sum[i++] = a % b;
	}
	printf("\n");
	for(int j = 0; j < i; j++)
		printf("%d\n",sum[j]);

	return 0;
}
