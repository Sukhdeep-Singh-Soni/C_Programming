#include<stdio.h>

main(){
    int i,T,N,r,max_r=0,q=0,max_q=0;

    scanf("%d",&T);
    while(T--) {
	scanf("%d",&N);
        for(i = 1; i <= N; i++) {
            if((r = (N % i)) != 0) {
                if(max_r < r) {
                    max_r = r;
                    q = i;
		}
                if(max_q < q)
                    max_q = q;
            }
	    else {
		if(q == 0){
		   max_q = i;
		   q = 0;
    		}
	    }
        }
	//if(N % 10)
	printf("%d\n",max_q);
    }

    return 0;
}
