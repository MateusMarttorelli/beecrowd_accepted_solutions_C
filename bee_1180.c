#include <stdio.h>

int main() {

	int x[1000], i, n, menor, posicao;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {

		scanf("%d", &x[i]);
	}

	menor = x[0];
	posicao = 0;

	for (i = 0; i < n; i++) {

		if (x[i] < menor) {
			menor = x[i];
			posicao = i;
		}
	}

	printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);

	return 0;
}