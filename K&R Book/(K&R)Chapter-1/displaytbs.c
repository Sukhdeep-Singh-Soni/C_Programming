#include<stdio.h>
main() { //start of main
   int c;
   while((c = getchar()) != EOF) //looping till EOF
         {   //start of while
            if(c == '\t') {
               putchar('\\');
               putchar('t');  
               } //end of if for \t
            else if(c == '\b') {
                 putchar('\\');
                 putchar('b');
               } //end of if for \b
            else if(c == '\\') {
                 putchar('\\');
                // putchar('\\');
               }  // end of if for \\
           else
              putchar(c);
         }   //end of while
} //end of main
