#include<stdio.h>

int Sum = 0,save=0;
void sum(int);

main()
{
	int T,D,N,i;

	scanf("%d",&T);
	while(T--){
		scanf("%d %d",&D,&N);
		save = N;
		for(i = 1; i <= D; i++)
			sum(save);
		printf("%d\n",Sum);
		Sum = 0;
	}
}

void sum(int N){
	int i;
	Sum = 0;
	for(i = 1; i <= N; i++)
		Sum += i;
	save = Sum;
}
