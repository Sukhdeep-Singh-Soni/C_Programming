#include<stdio.h>

main()
{
    int T,a,b,c;
    
    scanf("%d",&T);
    while(T--) {
        scanf("%d %d %d",&a,&b,&c);
        if((a + b + c) == 180)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
