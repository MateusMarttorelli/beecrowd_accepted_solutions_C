#include <stdio.h>

int main() {

	int x, y, soma = 0;

	scanf("%d %d", &x, &y);

	if (x < y) {

		for (x; x <= y; x++) {

			if (x % 13 != 0) 
				soma += x;			
		}
	}
	else if (y < x) {

		for (y; y <= x; y++) {

			if (y % 13 != 0)
				soma += y;
		}
	}

	printf("%d\n", soma);

	return 0;
}