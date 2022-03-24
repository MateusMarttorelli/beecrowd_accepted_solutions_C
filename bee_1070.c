#include <stdio.h>

int main() {

	int x, cont = 0;

	scanf("%d", &x);

	do {
		if (x % 2 == 1) {
			printf("%d\n", x);
			cont++;
		}

		x++;
	} while (cont < 6);

	return 0;
}