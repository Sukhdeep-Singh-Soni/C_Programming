
#include<stdio.h>

main(){
	int T,N,rev=0,s,r;

	scanf("%d",&T);
	while(T--) {
		scanf("%d",&N);
		s = N;
		while(N > 0) {
			r= N % 10;
			rev = rev * 10 + r;
			N /= 10;
		}
		if(rev == s)
			printf("wins\n");
		else
			printf("loses\n");
		rev = 0;
	}
}
