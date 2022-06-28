#include <stdio.h>
#include <string.h>

void main ()
{

	char ch[10];

	while (scanf("%[^\n]%*ch", &ch) != EOF)
	{

		if (strcmp(ch, "esquerda") == 0)
			printf("ingles\n");
		else if (strcmp(ch, "direita") == 0)
			printf("frances\n");
		else if (strcmp(ch, "nenhuma") == 0)
			printf("portugues\n");
		else if (strcmp(ch, "as duas") == 0)
			printf("caiu\n");

	}

}