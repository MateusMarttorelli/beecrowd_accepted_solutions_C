#include <stdio.h>

int main() {

	int i, x, N[10];

	scanf("%d", &x);

	printf("N[0] = %d\n", x);

	for (i = 1; i <= 9; i++) {

		x *= 2;
		printf("N[%d] = %d\n", i, x);
	}

	return 0;
}