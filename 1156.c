#include <stdio.h>
 
int main() {
 
    float i=1,j,s=0;
    for(j=1;j<=39;j+=2){
        
            
            s+=(j/i);
            i+=i;
        }
        
    
    printf("%.2f\n", s);
    
    
 
    return 0;
}