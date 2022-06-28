#include <stdio.h>
 
int main() {
 
    int n,a,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d", &a);
        if(a%2==1) printf("1\n");
        else printf("0\n");
    }
    return 0;
}