#include <stdio.h>

int main() {

	int x, i;

	do {
		scanf("%d", &x);

		for (i = 1; i < x; i++) {

			printf("%d ", i);
		}

		if (x != 0) {
			printf("%d\n", x);
		}

	} while (x != 0);

	return 0;
}