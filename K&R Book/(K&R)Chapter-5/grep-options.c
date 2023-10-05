#include<stdio.h>
#include<string.h>
#define MAXLINE 1000

int get_line(char *line,int max);

/*print lines that match pattern form 1st argument*/
main(int argc, char *argv[])
{
	long lineno = 0;
	char line[MAXLINE];
	int c,except = 0,number = 0,found = 0;

	while(--argc > 0 && (*++argv)[0] == '-')
		while(c = *++argv[0])
			switch(c) {
			case 'x':
				except = 1;
				break;
			case 'n':
				number = 1;
				break;
			default:
				printf("options: illegal option %c\n",c);
				argc = 0;
				found = -1;
				break;
			}
	if(argc != 1)
		printf("Usage: ./a.out -x -n [pattern]\n");
	else
		while(get_line(line,MAXLINE) > 0) {
			lineno++;
			if((strstr(line,*argv) != NULL) != except) {
				if(number)
					printf("%ld",lineno);
				printf("%s",line);
				found++;
			}
		}
	return found;
}
