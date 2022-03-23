#include <stdio.h>

int main() {

	float valor[6], soma = 0, media;
	int i, n_positivos = 0;

	for (i = 0; i <= 5; i++) {

		scanf("%f", &valor[i]);

		if (valor[i] > 0) {
			soma += valor[i];
			n_positivos++;
		}			
	}

	media = soma / n_positivos;

	printf("%d valores positivos\n", n_positivos);
	printf("%.1f\n", media);

	return 0;
}