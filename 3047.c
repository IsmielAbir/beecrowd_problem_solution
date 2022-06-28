#include <stdio.h>
 
int main() {
 
    int a,b,c,d;
    scanf("%d%d%d", &a,&b,&c);
    d = a-(b+c);
    if(c>b && c>d)
    printf("%d\n", c);
    
    else if(d>b && d>c)
    printf("%d\n", d);
    
   else if(b>c && b>d)
    printf("%d\n", b);
 
 
 
    return 0;
}