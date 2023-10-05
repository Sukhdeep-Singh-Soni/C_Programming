#include<stdio.h>

main()
{
	int T,N,firstN,lastN,storeN;

	scanf("%d",&T);
	while(T--) {
	  scanf("%d",&N);
	  storeN = N;
	  while(N > 0) {
		firstN = N;
		N /= 10;
	  }
	  lastN = storeN % 10;
	  printf("%d\n",firstN + lastN);
	}
}
