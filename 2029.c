#include <stdio.h>
 
int main() {
 
    float a,b,c,d,e;
    while(scanf("%f%f", &a, &b)!=EOF){
        c= b/2;
        d= c*c*3.14;
        e= a/d;
        printf("ALTURA = %.2f\nAREA = %.2f\n", e,d);
    }
 
    return 0;
}