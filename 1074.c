#include <stdio.h>
 
int main() {
 
    int n,i,a;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%d", &a);
        if(a%2==0 && a>0)
        printf("EVEN POSITIVE\n");
        
        else if(a%2==0 && a<0)
        printf("EVEN NEGATIVE\n");
        
        else if(a%2==1 && a>0)
        printf("ODD POSITIVE\n");
        
        else if(a%2==-1  && a<0)
        printf("ODD NEGATIVE\n");
        
        else if(a==0)
        printf("NULL\n");
        
    }
 
    return 0;
}