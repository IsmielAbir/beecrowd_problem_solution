#include <stdio.h>
#include<string.h>
 
int main() {
 
    char ch[20];
    int len;
    scanf("%s", &ch);
    len = strlen(ch);
    if(len>=10)
    printf("palavrao\n");
    else 
    printf("palavrinha\n");
    
 
    return 0;
}