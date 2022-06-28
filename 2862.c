#include <stdio.h>
 
int main() {
 
   int a,n,i;
   scanf("%d", &n);
   for(i=1;i<=n;i++){
       scanf("%d", &a);
       if(a>8000)
       printf("Mais de 8000!\n");
       else 
       printf("Inseto!\n");
   }
 
    return 0;
}