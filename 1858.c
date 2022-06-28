
#include <stdio.h>
int main()
{
    int n,i,c,d=0,e=1;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    c=a[d];
    for(d=0; d<n; d++)
    {
        if(a[d]<c)
        {
            c=a[d];
            e=d+1;
        }

    }
    printf("%d\n", e);
    return 0;
}
