#include <stdio.h>
#include <stdlib.h>

int main() {

	int p, n, i, cano[101];

	scanf("%d %d", &p, &n);

	for (i = 0; i < n; i++)
		scanf("%d", &cano[i]);

	for (i = 0; i < n - 1; i++) {

		if (abs(cano[i + 1] - cano[i]) > p) {

			printf("GAME OVER\n");
			return 0;
		}
	}

	printf("YOU WIN\n");

	return 0;
}