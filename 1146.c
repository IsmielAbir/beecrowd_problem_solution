#include <stdio.h>
 
int main() {
 
    int a,n,i;
    while(1){
    scanf("%d", &n);
    if(n==0) break;
    else {
        printf("1");
        for(i=2;i<=n;i++)
        printf(" %d", i);
        printf("\n");
    }
    }
 
    return 0;
}