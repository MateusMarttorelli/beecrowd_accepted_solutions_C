#include <stdio.h>

int main() {

	char nome[50];
	double sal_fixo, total_vendas, sal_final;

	scanf("%s %lf %lf", &nome, &sal_fixo, &total_vendas);

	sal_final = sal_fixo + (0.15 * total_vendas);

	printf("TOTAL = R$ %.2lf\n", sal_final);

	return 0;
}