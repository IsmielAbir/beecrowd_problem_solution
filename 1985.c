#include <stdio.h>
 
int main() {
 
    int a,b,n,i;
    float t=0;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%d%d", &a,&b);
        if(a==1001) t+= (float)(1.50* b);
                else if(a==1002) t+= (float)(2.50* b);

        else if(a==1003) t+= (float)(3.50* b);

        else if(a==1004) t+= (float)(4.50* b);

        else if(a==1005) t+= (float)(5.50* b);

    }
    printf("%.2f\n", t);
 
    return 0;
}