#include <stdio.h>
 
int main() {
 
    int r;
    double g;
    scanf("%d", &r);
    g  = (4.0/3)*3.14159*r*r*r;
    printf("VOLUME = %.3lf\n", g);
    return 0;
}