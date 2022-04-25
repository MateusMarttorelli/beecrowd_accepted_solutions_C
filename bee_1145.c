#include <stdio.h>

int main() {

	int i, j, k = 1, x, y, n_linhas;

	scanf("%d %d", &x, &y);

	n_linhas = y / x;

	for (i = 1; i <= n_linhas; i++) {

		for (j = 1; j <= x - 1; j++) {
			printf("%d ", k);
			k++;
		}

		printf("%d\n", k);
		k++;
	}

	return 0;
}