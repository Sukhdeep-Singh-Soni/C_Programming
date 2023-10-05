#include<stdio.h>

main()
{
	int T,a,b,min,max;

	scanf("%d",&T);
	while(T--) {
		scanf("%d %d",&a,&b);
		if(a < b)
		min = b;
		else
		min = a;
		max = a + b;
		printf("%d %d\n",min,max);
	}
	return 0;
}
