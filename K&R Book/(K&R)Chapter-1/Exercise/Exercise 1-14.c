#include<stdio.h>
#define MAXCHAR 128
#define MAXHIST 15
main()
{
	int c,i,word[MAXCHAR];

	for(i = 0; i < MAXCHAR; i++)
		word[i] = 0;
	while((c = getchar()) != EOF)
		++word[c];
	for(i = 0; i < MAXCHAR; i++)
		printf("%d   ",word[i]);
	printf("\n");
	for(int j = 0; j < MAXHIST; j++){
		for(i = 0; i < MAXCHAR; i++){
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
