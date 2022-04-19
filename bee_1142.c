#include <stdio.h>

int main() {

	int i, n_linhas;

	scanf("%d", &n_linhas);

	for (i = 0; i < n_linhas; i++) {

		printf("%d %d %d PUM\n", i * 4 + 1, i * 4 + 2, i * 4 + 3);
	}

	return 0;
}