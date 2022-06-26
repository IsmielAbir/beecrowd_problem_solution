#include <stdio.h>
 
int main() {
 
    float n,a1,a2,a3, a4, a5, b1,b2,b3,b4,b5;
    scanf("%f", &n);
    if(n>=0 && n<=400.00){
        a1 = (n*15)/100;
        b1 = a1+n;
        printf("Novo salario: %.2f\n", b1);
        printf("Reajuste ganho: %.2f\n", a1);
        printf("Em percentual: 15 %\n");
    }
    
   else if( n<=800.00){
        a2 = (n*12)/100;
        b2 = a2+n;
        printf("Novo salario: %.2f\n", b2);
        printf("Reajuste ganho: %.2f\n", a2);
        printf("Em percentual: 12 %\n");
    }
    
   else if( n<=1200.00){
        a3 = (n*10)/100;
        b3 = a3+n;
        printf("Novo salario: %.2f\n", b3);
        printf("Reajuste ganho: %.2f\n", a3);
        printf("Em percentual: 10 %\n");
    }
    
   else if( n<=2000.00){
        a4 = (n*7)/100;
        b4 = a4+n;
        printf("Novo salario: %.2f\n", b4);
        printf("Reajuste ganho: %.2f\n", a4);
        printf("Em percentual: 7 %\n");
    }
    
    else{
        a5 = (n*4)/100;
        b5 = a5+n;
        printf("Novo salario: %.2f\n", b5);
        printf("Reajuste ganho: %.2f\n", a5);
        printf("Em percentual: 4 %\n");
    }
    
    return 0;
}