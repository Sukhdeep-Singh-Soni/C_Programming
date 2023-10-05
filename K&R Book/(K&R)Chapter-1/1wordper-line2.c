#include<stdio.h>
#define IN 1
#define OUT 0
/* printing one word per line 2nd: version*/
main() {
  int nw,c,state=OUT;
  while((c = getchar()) != EOF) {
           if(c == ' ' || c == '\t' || c == '\n') {
                     if(state == IN) {
                        state = OUT;
                        putchar('\n');
                       }
                 } else {
                      if(state == OUT) {
                                state = IN;
                                ++nw;
                             }
                      putchar(c);
                    }
      } //end of while
}//end of main
