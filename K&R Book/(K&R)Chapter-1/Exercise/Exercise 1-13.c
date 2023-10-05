
#include<stdio.h>

#define IN 1
#define OUT 0
#define NWORD 1000

main()
{
	int nw = 0,i,j,c,state = OUT,word[NWORD];

	for(i = 0; i < NWORD; i++)
		word[i] = 0;

	while((c = getchar()) != EOF) {
		if(c == ' ' || c == '\t' || c == '\n')
			state = OUT;
		else {
			if(state == OUT) {
				state = IN;
				++nw;
			}
			++word[nw - 1];
		}
	}
	printf("\n");
	for(i = 0; i < nw; i++)
		printf("%d ",word[i]);
	printf("\n");
	for(j = 0; j < 15; j++) {
		for(i = 0; i < nw; i++) {
			if(j < word[i]){
				putchar('*');
				putchar(' ');
			}
			else {
				putchar(' ');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
