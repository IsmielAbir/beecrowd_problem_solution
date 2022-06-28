#include <stdio.h>
 
int main() {
 
    int n,i;
    char ch[50];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%[^\n]%*ch", &ch);
        printf("gzuz\n");
    }
 
    return 0;
}