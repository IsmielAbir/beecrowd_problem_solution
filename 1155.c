#include <stdio.h>
 
int main() {
 
   float i,j=1,s=0;
   for(i=1;i<=100;i++){
       s+=(j/i);
   }
   printf("%.2f\n", s);
 
    return 0;
}