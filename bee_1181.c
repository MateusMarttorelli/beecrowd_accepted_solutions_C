#include <stdio.h>

int main() {

	float M[12][12], soma = 0, media;
	int L, i, j;
	char T;

	scanf("%d %c", &L, &T);

	for (i = 0; i < 12; i++) {
		for (j = 0; j < 12; j++) {

			scanf("%f", &M[i][j]);
		}
	}

	if (T == 'S') {

		for (i = 0; i < 12; i++) {

			soma += M[L][i];
		}

		printf("%.1f\n", soma);
	}
	else if (T == 'M') {

		for (i = 0; i < 12; i++) {

			soma += M[L][i];
		}

		media = soma / 12;
		printf("%.1f\n", media);
	}

	return 0;
}