#include<stdio.h>

main()
{
    int i,N,k=0,hops=0,t,arr[100];

	scanf("%d",&t);
	while(t--) {
		scanf("%d",&N);
    		for(i=1; i < N; i++,N--)
        		;
		arr[k++] = i;
	}
	for(int j = 0; j < k; j++)
    		printf("%d\n",arr[j]);

	return 0;
}
