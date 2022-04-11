#include <stdio.h>

int main() {

	int cont = 0;
	float n, soma = 0, media;

	do {
		scanf("%f", &n);

		if (n >= 0 && n <= 10) {
			soma += n;
			cont++;
		}
		else {
			printf("nota invalida\n");
		}

	} while (cont != 2);

	media = soma / 2;

	printf("media = %.2f\n", media);

	return 0;
}