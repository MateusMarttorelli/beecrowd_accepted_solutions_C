#include <stdio.h>

int main() {

	float n1, n2, media;
	int x;

	do {

		media = 0;

		do {

			scanf("%f", &n1);

			if (n1 < 0 || n1 > 10)
				printf("nota invalida\n");
			else
				media += n1;

		} while (n1 < 0 || n1 > 10);

		do {

			scanf("%f", &n2);

			if (n2 < 0 || n2 > 10)
				printf("nota invalida\n");
			else
				media += n2;

		} while (n2 < 0 || n2 > 10);

		media /= 2;
		printf("media = %.2f\n", media);

		do {

			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &x);

		} while (x != 1 && x != 2);

	} while (x != 2);

	return 0;
}