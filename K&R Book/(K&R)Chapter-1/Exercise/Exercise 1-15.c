#include<stdio.h>

float fahr_to_cel(int);
main()
{
	int fahr;
	float cel;

	for(fahr = 0; fahr <= 300; fahr = fahr + 20) {
		cel = fahr_to_cel(fahr);
		printf("%3d\t%6.1f\n",fahr,cel);
	}
}

float fahr_to_cel(int fahr) {
	float cel = (9.0 / 5.0) * (fahr - 32.0);
	return cel;
}
