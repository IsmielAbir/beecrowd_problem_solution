#include <stdio.h>
 
int main() {
 
    int i, j;
    float p,q;
    scanf("%d", &i);
    scanf("%d%f", &j, &p);
    printf("NUMBER = %d\n", i);
    q = j*p;
    printf("SALARY = U$ %.2f\n", q);
    
 
    return 0;
}