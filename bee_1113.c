#include <stdio.h>

int main() {

	int x, y;

	do {
		scanf("%d %d", &x, &y);

		if (x == y) {
			break;
		}

		if (x < y) {
			printf("Crescente\n");
		}
		else if (y < x) {
			printf("Decrescente\n");
		}

	} while (2 > 1);

	return 0;
}