#include <stdio.h>
 
int main() {
    
    int a1, b1, a2, b2;
    float c1, c2,z;
    scanf("%d%d %f", &a1, &b1, &c1);
        scanf("%d%d %f", &a2, &b2, &c2);
        
        z= (b1*c1)+(b2*c2);
        printf("VALOR A PAGAR: R$ %.2f\n", z);
        

 

 
    return 0;
}