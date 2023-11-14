#include <stdio.h>

int main()
{
	double ch, il, ps, be, t;
	char c;

	printf("digite o numero de votos de cada partido.\n\n");

	printf("Numero de votos do CHEGA: ");
	scanf("%lf", &ch);
	printf("Numero de votos da Iniciative Liberal: ");
	getchar();
	scanf("%lf", &il);
	printf("Numero de votos do Partido Socialista: ");
	getchar();
	scanf("%lf", &ps);
	printf("Numero de votos do Bloco de Esquerda: ");
	getchar();
	scanf("%lf", &be);

	t = ch + il + ps + be;
	ch /= t;
	il /= t;
	ps /= t;
	be /= t;

	printf("As precentagens são as seguintes:\n");
	printf("CHEGA: %lf\n", ch);
	printf("Iniciativa Liberal: %lf\n", il);
	printf("Partido Socialista: %lf\n", ps);
	printf("Bloco de Esquerda: %lf\n", be);
	printf("\n");
	getchar();
	scanf("%c", &c);

	return 0;
}
