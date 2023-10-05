#include<stdio.h>

main(){

    int T,N;

    scanf("%d",&T);
    while(T--) {
        scanf("%d",&N);
        if(N < 10)
            printf("Thanks for helping Chef!\n");
        else
            printf("-1\n");
    }

    return 0;
}
