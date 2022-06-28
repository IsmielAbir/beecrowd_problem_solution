#include <stdio.h>
 
int main() {
 
    unsigned long long int n,m,r;
    int s=0;
    scanf("%llu", &n);
    m=n;
    while(m>0){
        r=m%10;
        if(r==3 && (m/10)%10==1){
        s=1;
        break;
        }
        m/=10;
    }
    if(s==1)
    printf("%llu es de Mala Suerte\n", n);
    else 
    printf("%llu NO es de Mala Suerte\n",n);
    return 0;
}