#include <stdio.h>

int main() {

	int N, i, j, k;

	do {
		scanf("%d", &N);

		if (N == 0)
			return 0;

		for (i = 0; i < N; i++) {
			for (j = 0; j < N; j++) {

				if (i == j)
					k = 1;

				else if (i < j)
					k = j - i + 1;

				else if (j < i)
					k = i - j + 1;		

				if (j == 0)
					printf("%3d", k);
				else
					printf(" %3d", k);
			}
			printf("\n");
		}
		printf("\n");

	} while (N != 0);

}