#include <stdio.h>

int main() {

	int peca_1, n_1, peca_2, n_2;
	float valor_1, valor_2, total;

	scanf("%d %d %f", &peca_1, &n_1, &valor_1);
	scanf("%d %d %f", &peca_2, &n_2, &valor_2);

	total = (n_1 * valor_1) + (n_2 * valor_2);

	printf("VALOR A PAGAR: R$ %.2f\n", total);

	return 0;
}