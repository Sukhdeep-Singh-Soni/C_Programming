#include<stdio.h>

main() {
	int T,N,K,q,r,n;

	scanf("%d",&T);
	while(T--) {
		scanf("%d %d", &N, &K);
		q = N / K;
		n = K * q;
		r = N - n;
		printf("%d\n",r);
	}
}
