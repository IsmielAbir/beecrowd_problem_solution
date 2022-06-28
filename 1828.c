#include <stdio.h>
#include <string.h>

int main(void)
{
    int c = 0, i = 0, num = 0;
    char ch[10], ch1[10];

    scanf("%d", &c);

    for (i = 0; i < c; ++i)
    {
        scanf(" %s", ch);
        scanf(" %s",ch1);

        if (strcmp(ch, ch1) == 0)
            printf("Caso #%d: De novo!\n", i + 1);
        else if (strcmp(ch, "tesoura") == 0 && (strcmp(ch1, "papel") == 0 || strcmp(ch1, "lagarto") == 0))
            printf("Caso #%d: Bazinga!\n", i + 1);
        else if (strcmp(ch, "papel") == 0 && (strcmp(ch1, "pedra") == 0 || strcmp(ch1, "Spock") == 0))
            printf("Caso #%d: Bazinga!\n", i + 1);
        else if (strcmp(ch, "pedra") == 0 && (strcmp(ch1, "lagarto") == 0 || strcmp(ch1, "tesoura") == 0))
            printf("Caso #%d: Bazinga!\n", i + 1);
        else if (strcmp(ch, "lagarto") == 0 && (strcmp(ch1, "Spock") == 0 || strcmp(ch1, "papel") == 0))
            printf("Caso #%d: Bazinga!\n", i + 1);
        else if (strcmp(ch, "Spock") == 0 && (strcmp(ch1, "tesoura") == 0 || strcmp(ch1, "pedra") == 0))
            printf("Caso #%d: Bazinga!\n", i + 1);
        else
            printf("Caso #%d: Raj trapaceou!\n", i + 1);
    }

    return 0;
}