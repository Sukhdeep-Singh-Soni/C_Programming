/* remove the trailing tabs and blankss and entirely remove blanks */
#include<stdio.h>
#define MAXLINE 1000
int getline_length(char s[], int maxline);
int removetbt(char s[]);
main(){
  int len,max;
  char line[MAXLINE],longest[MAXLINE];
 max = 0;
 while((getline_length(line,MAXLINE)) > 0)
               if(removetbt(line) > 0)
                   printf("%s",line);
 return 0;
}//end of main

/*Start of getline function */
int getline_length(char s[], int lim) {
 int i,c,j;
 for(i=0 ; i < lim-1 && (c = getchar()) != EOF && c != '\n' ; ++i)
                   s[i] = c;
   if(c == '\n') {
        s[i] = c;
        ++i;
       }
   return i;
}//end of getline

/*Start of copy function
void copy(char to[], char from[]) {
  int i;
  i=0;
  while((to[i] = from[i]) != '\0')
          ++i;
}//end of  copy */

int removetbt(char s[]){
  int i=0;
  while(s[i] != '\n')
      ++i;
 --i;
 while(i>=0 && (s[i] == ' ' || s[i] == '\t'))
        --i;
 if(i>=0){
  ++i;
  s[i] = '\n';
  ++i;
  s[i] = '\0';
 }
 return i;
}//end of remove
