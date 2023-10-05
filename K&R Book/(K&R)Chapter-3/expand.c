#include<stdio.h>
void expand(char s1[],char s2[]);
main(){
	char s1[100] = "a-z";	//options to put a-b-c,a-z0-9,-a-z- etc.
	char s2[100] = "ramdom";
	expand(s1,s2);
}

/*expand: expands shorthand notations like a-z in string s1 to 
	equivalent complete list abcd....xyz in s2*/
void expand(char s1[],char s2[]){
	int i,j,c;
	i=j=0;
	while((c = s1[i++]) != '\0')
		if(s1[i] == '-' && s1[i+1] >= c){
			i++;
			while(c < s1[i])
				s2[j++] = c++;
	}//end of if
		else
			s2[j++] = c;
	s2[j] = '\0';
	printf("%s",s2);
}//end of expand
