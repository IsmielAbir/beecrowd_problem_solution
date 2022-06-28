#include <stdio.h>
#include <math.h>
int main()
{
    
   unsigned long long int n;

    while (scanf("%llu", &n)!=EOF){
        printf("%.lf\n", ceil(n / 100.0));
    }

    return 0;
}