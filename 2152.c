#include <stdio.h>
 
int main() {
 
    int n,i,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d%d",&a,&b,&c);{
            if(a<10) printf("0%d:",a);
            else printf("%d:",a);
                if(b<10) printf("0%d",b);
                else printf("%d",b);
        }
        if(c==1)
        printf(" - A porta abriu!\n");
        else 
        printf(" - A porta fechou!\n");
    }
 
    return 0;
}