#include<stdio.h>

main()
{
    int T,N,i;
    long fact = 1;

    scanf("%d",&T);
    while(T--) {
        scanf("%d",&N);
        for(i = 1; i <= N; i++)
            fact = fact * i;
        printf("%ld\n",fact);
        fact = 1;
    }
}
