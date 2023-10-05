#include<stdio.h>

main()
{
	int lower, upper, step;
	float cel, fahr;

	lower = 0;
	upper = 300;
	step = 20;

	cel = 20;
	printf("Celsuis\tFahrrenheit\n");
	while(cel <= upper) {
		fahr = (9.0 / 5.0) * (cel + 32.0);
		printf("%5.0f %12.1f\n",cel, fahr);
		cel = cel + step;
	}
}
