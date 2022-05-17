#include <stdio.h>

int main() {

	double M[12][12], soma = 0, media;
	int i, j, k;
	char O;

	scanf("%c", &O);

	for (i = 0; i < 12; i++) {
		for (j = 0; j < 12; j++) {

			scanf("%lf", &M[i][j]);
		}
	}

	if (O == 'S') {

		for (i = 7; i <= 11; i++) {
			for (j = 5; j >= 12 - i; j--) {

				soma += M[i][j];
			}
		}

		for (i = 7; i <= 11; i++) {
			for (j = 6; j < i; j++) {

				soma += M[i][j];
			}
		}

		printf("%.1lf\n", soma);
	}
	else if (O == 'M') {

		for (i = 7; i <= 11; i++) {
			for (j = 5; j >= 12 - i; j--) {

				soma += M[i][j];
			}
		}

		for (i = 7; i <= 11; i++) {
			for (j = 6; j < i; j++) {

				soma += M[i][j];
			}
		}

		media = soma / 30;
		printf("%.1lf\n", media);
	}

	return 0;
}