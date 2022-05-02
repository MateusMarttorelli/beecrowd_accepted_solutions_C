#include <stdio.h>

int main() {

	int n_testes, i, j, n, soma_div;

	scanf("%d", &n_testes);

	for (i = 1; i <= n_testes; i++) {

		soma_div = 0;
		scanf("%d", &n);

		for (j = 1; j <= n / 2; j++) {

			if (n % j == 0) {
				soma_div += j;
			}
		}

		if (soma_div == n) 
			printf("%d eh perfeito\n", n);
		else
			printf("%d nao eh perfeito\n", n);
	}

	return 0;
}