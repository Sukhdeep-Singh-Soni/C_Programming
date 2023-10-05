#include<stdio.h>
main()
{
	int n,k,t,sum=0;

	scanf("%d %d",&n,&k);
	while(n--) {
		scanf("%d",&t);
		if(t % k == 0 && k <= 10000000 && t <= 100000000)
			sum++;
	}
	printf("\n%d\n",sum);

	return 0;
}
