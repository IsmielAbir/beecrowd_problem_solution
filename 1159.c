#include<stdio.h>
int main()
{
    int n;
    while(1){
        scanf("%d", &n);
        if(n==0) break;
        int sum=0;
        
        if(n%2 == 0) sum += n;
                else sum += ++n;
                
        for(int i=0;i<4;i++){
            n+=2;
            sum+=n;
       
        }
         printf("%d\n", sum);
            
        
    }

    return 0;
}