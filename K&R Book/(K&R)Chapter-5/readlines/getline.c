#include<stdio.h>


/*get a line from input and return the length of line*/
int get_line(char *line, int lim)
{
	int i,c;
	//char old_line = line;

	for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
			*(line + i) = c;
	if(c == '\n') {
		*(line+i) = c;
		i++;
	}
	*(line+i) = '\0';

	return i;

}
