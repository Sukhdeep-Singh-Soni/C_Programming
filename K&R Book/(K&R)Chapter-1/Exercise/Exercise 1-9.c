#include<stdio.h>

main()
{
	int c, lastc = 'a';

	while((c = getchar()) != EOF) {
		if(c == ' ') {
		   if(c == lastc)
			;
		  else
			putchar(c);
		} else
			putchar(c);
	    lastc = c;
	}
}

/*version 2
while((c = getchar()) != EOF){
	if(c != ' ')
		putchar(c);
	if(c == ' ')
	   if(lastc != ' ')
		putchar(c);
	lastc = c;
}*/
