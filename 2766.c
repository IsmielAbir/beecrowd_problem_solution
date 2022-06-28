#include <stdio.h>

int main()
{
    int i;

    char ch[40];

    for ( i = 1; i <= 10; ++i)
    {

        scanf("%s", ch);

        if (i == 3)
            puts(ch);
        else if (i == 7)
            puts(ch);
        else if (i == 9)
            puts(ch);

    }

    return 0;

}