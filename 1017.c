#include <stdio.h>
 
int main() {
 
    int a,b;
    float z;
    
    scanf("%d %d", &a,&b);
    
    z = (b*a)/12.0;
    
    printf("%.3f\n", z);
    
 
    return 0;
}