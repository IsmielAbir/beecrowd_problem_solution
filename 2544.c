#include <stdio.h>
#include <math.h>
int main(){
    int n,a;
    while(scanf("%d",&n)!=EOF){
         a = log2(n);
        printf("%d\n", a);    
    }
    return 0;
}