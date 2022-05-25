#include <stdio.h>

int main() {

	int N, i, j, k;

	do {
		scanf("%d", &N);

		if (N == 0)
			break;

		for (i = 0; i < N; i++) {
			for (j = 0; j < N; j++) {

				k = i + 1;

				if (j + 1 < k)
					k = j + 1;

				if (N - i < k)
					k = N - i;

				if (N - j < k)
					k = N - j;

				if (j == 0)
					printf("%3d", k);
				else
					printf(" %3d", k);

			}
			printf("\n");
		}
		printf("\n");

	} while (N != 0);

	return 0;
}