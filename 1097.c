#include <stdio.h>
int main()
{
    
    int i,j,a=7,k;
    for(i=1;i<=9;i+=2){
        for(j=1,k=a;j<=3;k--,j++){
            printf("I=%d J=%d\n", i,k);
        }
        a+=2;
    }
    return 0;
}