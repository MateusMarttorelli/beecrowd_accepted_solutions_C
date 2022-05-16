#include <stdio.h>

int main() {

	float M[12][12], soma = 0, media;
	int i, j;
	char O;

	scanf("%c", &O);

	for (i = 0; i < 12; i++) {
		for (j = 0; j < 12; j++) {

			scanf("%f", &M[i][j]);
		}
	}

	if (O == 'S') {

		for (i = 11; i >= 0; i--) {
			for (j = 11; j > 11 - i; j--) {

				soma += M[i][j];
			}
		}
		printf("%.1f\n", soma);
	}
	else if (O == 'M') {

		for (i = 11; i >= 0; i--) {
			for (j = 11; j > 11 - i; j--) {

				soma += M[i][j];
			}
		}
		media = soma / 66;
		printf("%.1f\n", media);
	}

	return 0;
}