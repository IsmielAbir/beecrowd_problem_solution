#include <stdio.h>
 
int main() {
 
    int n,i;
    float a,b,c,d;
    scanf("%d", &n);
    for(i=1; i<=n;i++){
        scanf("%f%f%f", &a,&b,&c);
        d = ((a*2.0)+(b*3.0)+(c*5.0))/10;
        printf("%.1f\n", d);
        
    }
    return 0;
}