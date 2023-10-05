#include<stdio.h>

main()
{
	int i,N,temp,se=0,so=0;

	scanf("%d",&N);
	for(i = 1; i <= N; i++){
		scanf("%d",&temp);
		if((temp %2) == 0)
			se++;
		else
			so++;
	}
	if(se > so)
		printf("READY FOR BATTLE\n");
	else
		printf("NOT READY\n");
}
