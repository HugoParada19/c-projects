#include <stdio.h>

int main()
{
	int i, x;
	char c;
	printf("Digite um numero: ");
	scanf("%d", &i);
	printf("Outro: ");
	getchar();
	scanf("%d", &x);

	if (i < x)
	{
		printf("%d é maior que %d", x, i);
	} else if (i > x)
	{
		printf("%d é maior que %d", i, x);
	}
	else
	{
		printf("Os dois numeros têm o mesmo valor.");
	}
	getchar();
	scanf("%c", &c);

	return 0;
}
