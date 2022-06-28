#include <stdio.h>
 
int main() {
 
    int n,i,f=0, m=0;
    char ch[20], ah[10];
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%s%s", &ch, &ah);
        if(strcmp(ah, "F")) m++;
        else if(strcmp(ah, "M")) f++;
        
    }
    printf("%d carrinhos\n", m);
    printf("%d bonecas\n", f);
 
    return 0;
}