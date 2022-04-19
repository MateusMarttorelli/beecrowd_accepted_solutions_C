#include <stdio.h>
#include <math.h>

int main() {

	int i, n_linhas;

	scanf("%d", &n_linhas);

	for (i = 1; i <= n_linhas; i++) {

		printf("%d %.0lf %.0lf\n", i, pow(i, 2), pow(i, 3));
	}

	return 0;
}