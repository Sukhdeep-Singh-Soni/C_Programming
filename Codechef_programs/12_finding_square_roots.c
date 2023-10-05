#include<stdio.h>
#include<math.h>

main(void) {
    int T,N;

    scanf("%d",&T);
    while(T--) {
        scanf("%d",&N);
        printf("%.0f\n",sqrt((double)N));
    }
    return 0;
}


