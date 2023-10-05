#include<stdio.h>

main(){
    int N;
    scanf("%d",&N);
    if((N % 4) == 0)
        printf("%d\n",++N);
    else
        printf("%d\n",--N);
}
