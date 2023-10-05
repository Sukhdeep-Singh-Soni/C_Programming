#include<stdio.h>

main(){
	int T,X,i=0,count=0;

	scanf("%d",&T);
	while(T--) {
		scanf("%d",&X);
		do {
			if((X % 10) == 0) {
				printf("%d\n",i);
				break;
			}
			X *= 2;
			i++;
		}while(i <= 1000);
		if(i > 1000)
			printf("-1\n");
		i = 0;
	}
}
