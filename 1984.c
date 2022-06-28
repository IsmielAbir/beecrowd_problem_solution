#include <stdio.h>
#include <string.h>
int main()
{
    char n[25], t;
    scanf("%s", n);
    int l = strlen(n);
    int i, j;
    for(i=0, j=l-1; i < l/2; i++, j--)
    {
        t = n[i];
        n[i]=n[j];
        n[j]=t;
    }
    printf("%s\n", n);
    return 0;
}
