#include<stdio.h>
#define MAX 1000
main()
{
	int n,i,sum[MAX],j=0;

	for(i = 0; i < MAX; i++)
		sum[i] = 0;

	scanf("%d",&i);
	while(i--) {
		scanf("%d",&n);
		do {
			sum[j] += n % 10;
		}while((n /= 10) > 0);
		j++;
	}
	printf("\n");
	for(i = 0; i < j; i++)
		printf("%d\n",sum[i]);

	return 0;
}
