#include<stdio.h>
#define TABSTOP 8
main(){
 int c,i,nb,pos=1;
 while((c = getchar()) != EOF)
       if(c == '\t'){
            nb = TABSTOP - (pos - 1) % TABSTOP;
            while(nb > 0){
                 putchar(' ');
		 ++pos;
		 --nb;
  		}
                }  else if(c == '\n') {
       			putchar(c);
 			pos = 1;
                      }else {
        		putchar(c);
			++pos;
			}
}//end of main
