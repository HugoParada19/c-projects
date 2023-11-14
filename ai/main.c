#include <stdio.h>

int main()
{
	double salario;
	char c;
	int passed = 0;

	printf("Digite o seu salário: ");
	scanf("%lf", &salario);

	if (salario < 0)
	{
		printf("Erro...");
	}
	else if (salario > 1000)
	{
		salario *= 0.1;
		passed = 1;
	}
	else
	{
		salario *= 0.05;
		passed = 1;
	}

	if (passed == 1)
	{
		printf("O imposto que tem de pagar é de: %lf euros", salario);
	}
	getchar();
	scanf("%c", c);

	return 0;
}
