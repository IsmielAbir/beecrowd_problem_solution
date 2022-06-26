#include <stdio.h>
 
int main() {
 
   float n,sum=0.0,a=0;
   int i;
   for(i=1;i<=6;i++){
       scanf("%f", &n);
       if(n>0) {a++;
       sum=sum+n;}
   }
   printf("%.0f valores positivos\n%.1f\n", a, sum/a);
   
    return 0;
}