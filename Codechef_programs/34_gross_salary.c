#include<stdio.h>
#define BOUND 1500
int main() {
    int T,salary;
    float HRA,DA,gross;

    scanf("%d",&T);
    while(T--) {
        scanf("%d",&salary);
        if(salary < BOUND) {
            HRA = 0.1 * salary;
            DA = 0.9 * salary;
            gross = salary + HRA + DA;
        }
        else if(salary >= BOUND) {
            HRA = 500;
            DA = 0.98 * salary;
            gross = salary + HRA + DA; 
        }
        printf("%0.2f\n",gross);
    }
    return 0;
}
