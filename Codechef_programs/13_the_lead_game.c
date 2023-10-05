#include<stdio.h>

main()
{
    int T,s1,s2,W,L1=0,L2=0,max_L=0;

    scanf("%d",&T);
    while(T--) {
        scanf("%d %d",&s1, &s2);
        if(s1 > s2)
            L1 = s1 - s2;
        else
            L2 = s2 - s1;
        if(max_L < L1) {
            max_L = L1;
            W = 1;
        }
        else if(max_L < L2) {
            max_L = L2;
            W = 2;
        }
    }
	 printf("%d %d\n",W,max_L);
}
