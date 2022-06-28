#include <stdio.h>
 
int main() {
 
   int n,i;
  
   char ch[40];
    scanf("%d", &n);
   
   for(i=1;i<=n;i++){
   scanf("%[^\n]%*c", &ch);
   if(strlen(ch)>25)
   printf("N\n");
   else
   printf("Y\n");
   }
   
 
    return 0;
}