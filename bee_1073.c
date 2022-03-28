#include <stdio.h>
#include <math.h>

int main() {

	double quadrado;
	int n, i;

	scanf("%d", &n);

	for (i = 2; i <= n; i += 2) {

		quadrado = pow(i, 2);
		printf("%d^2 = %.0lf\n", i, quadrado);
	}

	return 0;
}