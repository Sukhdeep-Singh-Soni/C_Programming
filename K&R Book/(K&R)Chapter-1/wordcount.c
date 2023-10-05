#include<stdio.h>
#define IN 1
#define OUT 0
/* count the no. of lines, words, characters in input (an implementation of wc command in linux)*/
main(){ //strat of main
  int nl,nw,nc,c,state=OUT;
  nl = nw = nc = 0;
  while((c = getchar()) != EOF) { //start of while
          ++nc;
           if(c == '\n')
             ++nl;
           if(c == ' ' || c == '\n' || c == '\t')
                    state = OUT;
          else if(state == OUT) {
                     state = IN;
                     ++nw;
                    } //end of else if
       } //end of while
 printf("line count = %d\nword count = %d\ncharacter count = %d\n",nl,nw,nc);
} //end of main
