#include <stdio.h>

main(void) {
    int T,N,count4=0;

    scanf("%d",&T);
    while(T--) {
        scanf("%d",&N);
        while(N > 0) {
            if(N % 10 == 4)
                count4++;
            N /= 10;
        }
        printf("%d\n",count4);
	count4 = 0;
    }
	return 0;
}


