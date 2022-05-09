#include <stdio.h>

int main() {

	int n[1000], i, j, x = 0, t;

	scanf("%d", &t);

	for (i = 0; i < 1000; i++) {

		n[i] = x;
		x++;

		if (x >= t) {
			x = 0;
		}

		printf("N[%d] = %d\n", i, n[i]);
	}

	return 0;
}