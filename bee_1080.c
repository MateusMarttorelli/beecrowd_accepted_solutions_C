#include <stdio.h>

int main() {

	int n, n_maior = 0, posicao, i;

	for (i = 1; i <= 100; i++) {

		scanf("%d", &n);

		if (n > n_maior) {
			n_maior = n;
			posicao = i;
		}
	}

	printf("%d\n%d\n", n_maior, posicao);	

	return 0;
}