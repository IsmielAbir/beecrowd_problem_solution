#include <stdio.h>
 
int main() {
 
    int n,i,j;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2;j++){
            if(j==1)
            printf("%d %d %d\n", i,i*i,i*i*i);
            else 
                        printf("%d %d %d\n", i,(i*i)+1,(i*i*i)+1);
     
        }
      
 
        
    }
    
    return 0;
}