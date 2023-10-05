#include<stdio.h>

main(){
    int Hrd,Ts,T;
    float CC;

    scanf("%d",&T);
    while (T--)
    {
        scanf("%d %f %d",&Hrd,&CC,&Ts);
        if(Hrd > 50 && CC < 0.7 && Ts > 5600)
            printf("10\n");
        else if(Hrd > 50 && CC < 0.7)
            printf("9\n");
        else if(CC < 0.7 && Ts > 5600)
            printf("8\n");
        else if(Hrd > 50 && Ts > 5600)
            printf("7\n");
        else if(Hrd > 50 || CC < 0.7 || Ts > 5600)
            printf("6\n");
        else
            printf("5\n");

    }
    return 0;   
}