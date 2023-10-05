/* print the longest input line*/
#include<stdio.h>
#define MAXLINE 1000
#define LONGLINE 80
int getline_length(char s[], int maxline);
void copy(char to[],char from[]);
main(){
  int len,max;
  char line[MAXLINE],longest[MAXLINE];
 max = 0;
 while((len = getline_length(line,MAXLINE)) > 0)
                 if(len > LONGLINE){
                  //max = len;
                  //copy(longest,line);
                  printf("%s\n",line);
                 }
             //if(max > 0)
               //printf("%s",longest);
 return 0;
}//end of main

/*Start of getline function */
int getline_length(char s[], int lim) {
 int i,c;
 for(i=0 ; i < lim-1 && (c = getchar()) != EOF && c != '\n' ; ++i)
                s[i] = c;
   if(c == '\n') {
        s[i] = c;
        ++i;
       }
    s[i] = '\0';
   return i;
}//end of getline

/*Start of copy function*/
void copy(char to[], char from[]) {
  int i;
  i=0;
  while((to[i] = from[i]) != '\0')
          ++i;
}//end of  copy
