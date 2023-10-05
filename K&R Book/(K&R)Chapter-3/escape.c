/*program to convert newline and tab to \n and \t when copying string t to s with switch*/
#include<stdio.h>
void escape(char s[], char t[]);
void unescape( char s[], char t[]);
main(){
	int c,i=0;
	char s[100],t[100];
	while((c = getchar()) != EOF)
		t[i++] = c;
	escape(s,t);
	unescape(s,t);
}

/*escape function */
void escape(char s[], char t[]){
	int i,j;
	for(i=j=0;t[i] !=  '\0';i++){
		switch(t[i]){
		case '\n':
			s[j++] = '\\';
			s[j++] = 'n';
			break;
		case '\t':
			s[j++] = '\\';
			s[j++] = 't';
			break;
		default:
			s[j++] = t[i];
			break;
		}
	}
	s[j] = '\0';
	printf("%s\n",s);
}

/*unescape function for the following convert escape function*/
void unescape(char s[], char t[]){
	int i,j;
	for(i = j = 0 ; t[i] != '\0' ; i++){
		if(t[i] != '\\')
			s[j++] = t[i];
		else {
			switch(t[++i]){
			case 'n':
				s[j++] = '\n';
				break;
			case 't':
				s[j++] = '\t';
				break;
			default:
				s[j++] = '\\';
				s[j++] = t[i];
				break;
			}//end of switch
		}//end of else
	}//end of for
	s[j] = '\0';
	printf("%s\n",s);
}//end of unescape func
