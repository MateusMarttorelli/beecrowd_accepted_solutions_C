#include <stdio.h>

int main() {

	double n[100], x;
	int i;

	scanf("%lf", &x);

	printf("N[0] = %.4lf\n", x);

	for (i = 1; i < 100; i++) {

		x /= 2;
		n[i] = x;

		printf("N[%d] = %.4lf\n", i, x);
	}

	return 0;
}