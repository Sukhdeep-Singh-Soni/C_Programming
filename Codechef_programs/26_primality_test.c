#include<stdio.h>

main()
{
	int T,N,i,prime = 0;

	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		for(i = 1; i <= N; i++)
			if((N % i) == 0)
				prime++;
		if(prime == 2)
			printf("yes\n");
		else
			printf("no\n");
		prime = 0;
	}
	return 0;
}
