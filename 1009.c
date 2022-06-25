#include <stdio.h>
 
int main() {
 
    char name;
    float salary, bonus,sub, total;
    scanf("%s", &name);
    scanf("%f%f", &salary, &bonus);
    sub = (bonus*15)/100;
    total = salary + sub;
    printf("TOTAL = R$ %.2f\n", total);
    
    
 
    return 0;
}