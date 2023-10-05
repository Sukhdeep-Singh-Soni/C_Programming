#include<stdio.h>
#define CHARGE 0.50
main()
{
	int cash;
	float amt;

	scanf("%d %f",&cash,&amt);
	if(cash % 5 == 0 && amt >= cash + CHARGE)
		printf("%0.2f\n",amt -= cash + CHARGE);
	else
		printf("%0.2f\n",amt);

	return 0;
}
