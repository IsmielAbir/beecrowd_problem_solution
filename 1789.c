#include <stdio.h>
int main()
{
    int n,i,c,m=0;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1,m=0; i<=n; i++)
        {
            scanf("%d", &c);
            if(c>m)
                m=c;
        }
        if(m<10)
            printf("1\n");
        else if(m<20)
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}