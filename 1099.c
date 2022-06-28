#include <stdio.h>
 
int main() {
 
   int n,a,b,i,j,t,sum=0;
   scanf("%d", &n);
   for(i=1;i<=n;i++){
       scanf("%d%d", &a,&b);
       if(a>b){t=a;a=b;b=t;}
       for(j=a+1;j<b;j++){
           if(j%2!=0){
            sum+=j;   
           }
       }
          printf("%d\n", sum);

       sum=0;
   }
    return 0;
}