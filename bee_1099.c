#include <stdio.h>

int main() {

	int n, i, x, y, soma = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {

		scanf("%d %d", &x, &y);

		if (x < y) {

			x++;

			for (x; x < y; x++) {

				if (x % 2 != 0) {
					soma += x;
				}
			}
		}
		else if (x > y) {

			y++;

			for (y; y < x; y++) {

				if (y % 2 != 0) {
					soma += y;
				}
			}
		}
		printf("%d\n", soma);
		soma = 0;
	}

	return 0;
}