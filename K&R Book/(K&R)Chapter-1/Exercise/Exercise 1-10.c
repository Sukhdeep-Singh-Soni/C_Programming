#include<stdio.h>

main()
{
	int c;

	while((c = getchar()) != EOF) {
		if(c == '\t') {
		  putchar('\\');
		  putchar('t');
		}
		if(c == '\b') {
		  putchar('\\');
		  putchar('b');
		}
		if(c == '\\') {
		  putchar('\\');
		  putchar('\\');
		}
		putchar(c);
	}
}

/*version 2
while((c = getchar()) != EOF)
	if(c == '\t')
		printf("\\t");
	if(c == '\b')
		printf("\\b");
	if(c == '\\')
		printf("\\\\");
	if(c != '\b')
		if(c != '\t')
			if(c != '\\')
				putchar(c);
*/
