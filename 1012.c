#include <stdio.h>
 
int main() {
 
    float a,b,c,d,e,f,g,h;
    scanf("%f%f%f", &a,&b,&c);
    d = (a*c)/2;
    e= 3.14159*c*c;
    f= ((a+b)/2)*c;
    g= b*b;
    h= a*b;
    printf("TRIANGULO: %.3f\n", d);
        printf("CIRCULO: %.3f\n", e);
    printf("TRAPEZIO: %.3f\n", f);
    printf("QUADRADO: %.3f\n", g);
    printf("RETANGULO: %.3f\n", h);

    return 0;
}