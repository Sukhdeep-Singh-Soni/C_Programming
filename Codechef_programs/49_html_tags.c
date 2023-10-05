#include<stdio.h>
main(){
    int c,T,flag=0;
    char str[15];
    scanf("%d",&T);
    while(T--){
        if((c = getchar()) == '<' && (c = getchar()) == '/'){
          if((c = getchar()) == '>')
            printf("Error\n");
          while((c = getchar()) != '>'){
            if(!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z'))){
                flag = 1;
                break;
            }
            else
                flag = 0;
          }
          if(flag == 0)
            printf("Success\n");
          else
            printf("Error\n");
        }
        else
            printf("error\n");
    }
}