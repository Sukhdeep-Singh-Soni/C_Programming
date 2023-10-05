#include<stdio.h>
/*get a line from input and return the length of line*/
int get_line(char *line, int lim)
{
	int i,c;

	for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
			*line++ = c;
	if(c == '\n') {
		*line++ = c;
		i++;
	}
	*line = '\0';

	return i;

}
