#include <stdio.h>

int main() {

	int n, x, y, i, j = 1, soma = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {

		scanf("%d %d", &x, &y);

		do {

			if (x % 2 != 0) {
				soma += x;
				j++;
			}
			x++;

		} while (j <= y);

		printf("%d\n", soma);
		soma = 0;
		j = 1;
	}

	return 0;
}