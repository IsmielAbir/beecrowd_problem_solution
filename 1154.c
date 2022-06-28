#include <stdio.h>
 
int main() {
 
    float p=0, n, sum=0,i=0;
    while(scanf("%f", &n)!=EOF){
        if(n<0) break;
       
            sum=sum+n;
             p++;
        
        
    }
    i=sum/p;
     printf("%.2f\n", i);
    return 0;
}