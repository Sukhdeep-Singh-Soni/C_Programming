#include<stdio.h>

main()
{
	int T,quantity,price;
	float expenses;

	scanf("%d",&T);
	while(T--){
		scanf("%d %d",&quantity,&price);
		expenses = quantity * price;
		if(quantity > 1000)
		printf("%f\n",expenses - (expenses / 10));
		else
		printf("%f\n",expenses);
	}
}
