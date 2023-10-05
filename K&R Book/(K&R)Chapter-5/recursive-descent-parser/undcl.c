#include<string.h>
#include<stdio.h>
#include<ctype.h>

#define MAXTOKEN 100

enum {NAME, PARENS, BRACKETS};

int gettoken(void);
char out[1000];
char token[MAXTOKEN];
char tokentype[MAXTOKEN];


/*convert word description to declarations*/
main()
{
	int type;
	char temp[MAXTOKEN];

	while(gettoken() != EOF) {
		strcpy(out,token);
		while((type = gettoken()) != '\n')
			if(type == PARENS || type = BRACKETS)
				strcat(out,token);
			else if(type == '*') {
				sprintf(temp, "(*%s)", out);
				strcpy(out,temp);
			} else if(type == NAME) {
				sprintf(temp, "%s %s",token,out);
				strcpy(out,temp);
			} else 
				printf("invalid input at %s\n",token);
	}
	return 0;
}
