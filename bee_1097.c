#include <stdio.h>

int main() {

	int i, j = 7, k;

	for (i = 1; i <= 9; i += 2) {

		k = j;

		for (j; j >= (k- 2); j--) {

			printf("I=%d J=%d\n", i, j);
		}

		j += 5;
	}

	return 0;
}