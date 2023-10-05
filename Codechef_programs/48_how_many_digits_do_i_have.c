#include<stdio.h>

main(){
    int N,count = 0;
    
    scanf("%d",&N);
    do {
        count++;
    }while(N /= 10);
    
    if(count == 1)
        printf("1\n");
    else if(count == 2)
        printf("2\n");
    else if(count == 3)
        printf("3\n");
    else
        printf("More than 3 digits\n");
}