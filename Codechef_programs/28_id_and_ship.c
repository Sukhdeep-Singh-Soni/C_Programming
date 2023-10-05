#include<stdio.h>

main()
{
	int T;
	char c;

	scanf("%d",&T);
	while(T--) {

		scanf(" %c",&c);
		if(c == 'B' || c == 'b')
			printf("BattleShip\n");
		else if(c == 'C' || c == 'c')
			printf("Cruiser\n");
		else if(c == 'D' || c == 'd')
			printf("Destroyer\n");
		else if(c == 'F' || c == 'f')
			printf("Frigate\n");
	}
}

