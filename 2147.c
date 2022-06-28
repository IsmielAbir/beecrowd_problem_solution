#include <stdio.h>
#include<string.h>
 
int main() {
 
    int n,i,len;
    char ch[10001];
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%s", ch);
        len=strlen(ch);
        printf("%.2f\n", len/100.0);
    }
 
    return 0;
}