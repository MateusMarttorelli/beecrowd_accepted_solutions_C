#include <stdio.h>

int main() {

	int n, i, menor, posicao, vetor[100];

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &vetor[i]);

	menor = vetor[0];

	for (i = 0; i < n; i++) {

		if (vetor[i] < menor) {

			menor = vetor[i];
			posicao = i;
		}
	}

	printf("%d\n", posicao + 1);

	return 0;
}