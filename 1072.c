#include <stdio.h>
 
int main() {
 
    int n,a=0,b=0,i,j;
    scanf("%d", &j);
    for(i=1;i<=j;i++){
        
        scanf("%d", &n);
    
        if(n>=10 && n<=20)
        a++;
        else 
        b++;
        
    }
    printf("%d in\n%d out\n", a,b);
 
    return 0;
}