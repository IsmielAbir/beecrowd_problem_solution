#include <stdio.h>
 
int main() {
 
    int i,h=0,m=0,s=0;
    scanf("%d", &i);
    
    h = i/3600;
    i=i%3600;
    
    m = i/60;
    
    s= i%60;
    printf("%d:%d:%d\n", h,m,s);
    
    return 0;
}