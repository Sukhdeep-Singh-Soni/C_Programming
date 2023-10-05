#include<stdio.h>
/* count the number of blanks tabs and newlines*/
main() {
 int nb=0,nt=0,nl=0,c;
 while((c = getchar()) != EOF) {
           if(c == ' ')
               ++nb;
           if(c == '\t')
               ++nt;
          if(c == '\n')
               ++nl;
      }
 printf("blanks = %3d\ntabs   = %3d\nlines  = %3d\n",nb,nt,nl);
}
