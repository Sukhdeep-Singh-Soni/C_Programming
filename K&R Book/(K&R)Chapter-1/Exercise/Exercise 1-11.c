#include<stdio.h>
#define IN 1
#define OUT 0

main()
{
	int c,nc,nl,nw,state = OUT;

	nc = nl = nw = 0;
	while((c = getchar()) != EOF) {
		++nc;
		if(c == '\n')
			++nl;
		if(c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if(state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("nc=%d nw=%d nl=%d\n",nc,nw,nl);
	return 0;
}
