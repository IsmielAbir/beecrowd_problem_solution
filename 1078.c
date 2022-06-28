#include <stdio.h>
 
int main() {
 
    
    int i, a;
    scanf("%d", &a);
    for(i=1; i<11; i++){
        printf("%d x %d = %d\n", i, a, i*a);
    }
    
 
    return 0;
}