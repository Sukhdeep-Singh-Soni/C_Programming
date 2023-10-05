#include <stdio.h>

main(void) {
	int T,N,r,rev=0;

	scanf("%d",&T);
	while(T--) {
	    scanf("%d",&N);
	    while(N) {
	        r = N % 10;
		rev = rev * 10 + r;
	        N /= 10;
	    }
	   printf("%d\n",rev);
	   rev = 0;
	}
	return 0;
}


