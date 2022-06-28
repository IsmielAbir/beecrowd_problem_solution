#include <stdio.h>

int main() {
    
    int i,j,n;
    char ch;
    float sum=0.0, a,b=0;
    scanf("%c",&ch);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%f", &a);
            if(i>j){ sum+=a;
            b++;
            }
        }
    }
    if(ch=='S') printf("%.1f\n", sum);
    else printf("%.1f\n", sum/b);
    

    return 0;
}