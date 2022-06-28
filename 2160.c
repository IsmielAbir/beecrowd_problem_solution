#include <stdio.h>
#include<string.h>
 
int main() {
 
   char ch[500];
   int len;
   scanf("%[^\n]%*c", &ch);
   len=strlen(ch);
   if(len<=80)
   printf("YES\n");
   else 
   printf("NO\n");
   
 
    return 0;
}