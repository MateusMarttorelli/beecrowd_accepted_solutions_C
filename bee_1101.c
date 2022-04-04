#include <stdio.h>

int main() {

	int m, n, soma = 0;

	do {
		scanf("%d %d", &m, &n);

		if (m <= 0 || n <= 0) {
			break;
		}

		if (n < m) {

			for (n; n <= m; n++) {
				printf("%d ", n);
				soma += n;
			}
			printf("Sum=%d\n", soma);
		}
		else if (m < n) {

			for (m; m <= n; m++) {
				printf("%d ", m);
				soma += m;
			}
			printf("Sum=%d\n", soma);
		}
		soma = 0;

	} while (2 > 1);

	return 0;
}