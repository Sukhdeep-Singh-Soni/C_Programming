#include<stdio.h>
/* count lines 1st: Version*/
main() {
 int c,nl;
 while((c = getchar()) != EOF)
        if(c == '\n')
           ++nl;
 printf("%d\n",nl);
}
