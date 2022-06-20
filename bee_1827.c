#include <stdio.h>

int main() {

	int n, i, j, centro, inicio_margem, fim_margem;

	while (scanf("%d", &n) != EOF) {

		centro = n / 2;
		inicio_margem = n / 3;
		fim_margem = n - inicio_margem;

		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {

				if ((i == centro) & (j == centro))
					printf("4");

				else if ((i >= inicio_margem & i < fim_margem) & (j >= inicio_margem & j < fim_margem))
					printf("1");

				else if (i == j)
					printf("2");

				else if (i == (n - j - 1))
					printf("3");

				else
					printf("0");
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}