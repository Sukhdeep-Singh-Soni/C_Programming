#include<stdio.h>

main()
{
	int lower, upper, step;
	float fahr, celsius;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("Fahrenheit\tCelsius\n");
	while(fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f\t  %12.1f\n",fahr, celsius);
		fahr = fahr + step;
	}
}
