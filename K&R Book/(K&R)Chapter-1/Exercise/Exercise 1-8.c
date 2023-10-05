#include<stdio.h>

main()
{
	int c,bl,tb,nl;

	bl = tb = nl = 0;
	while((c = getchar()) != EOF) {
		if(c == ' ')
			++bl;
		if(c == '\t')
			++tb;
		if(c == '\n')
			++nl;
	}
	printf("blanks-%d\ntabs-%d\nnewlines-%d\n",bl,tb,nl);
}
