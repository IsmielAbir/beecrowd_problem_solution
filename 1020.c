#include <stdio.h>
 
int main() {
 
    int i,y=0,m=0,d=0;
    scanf("%d", &i);
    
    y = i/365;
    i=i%365;
    
    m = i/30;
    
    d= i%30;
    printf("%d ano(s)\n", y);
        printf("%d mes(es)\n", m);

    printf("%d dia(s)\n", d);

    
    return 0;
}