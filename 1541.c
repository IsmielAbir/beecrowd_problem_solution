#include <stdio.h>

int main()
{
    int a,b,c,d;
    while(1){
        scanf("%d%d%d", &a,&b,&c,&d);
        if(a==0) break;
        else{
            d = sqrt((a*b*100)/c);
            printf("%d\n", d);
            
        }
    }

    return 0;
}