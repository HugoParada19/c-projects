#include <stdio.h>

int main()
{
	char c;
	printf("Escreva o seu salário: ");
	int i;
	scanf("%d", &i);
	if (i < 500)
	{
		i += 100;
	}
	else
	{
		i += 50;
	}

	printf("O seu salário foi aumentado para %d\n", i);
	getchar();
	scanf("%c", &c);

	return 0;
}
