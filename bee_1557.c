#include <stdio.h>
#include <math.h>

int main() {

	unsigned long int N, i, j, k, t, digitos;	

	do {
		scanf("%d", &N);

		if (N == 0)
			return 0;

		digitos = 0;

		t = pow(2, (N + N - 2));

		do
		{

			t % 10;
			t = t / 10;
			digitos++;

		} while (t > 0);

		for (i = 0; i < N; i++) {
			for (j = 0; j < N; j++) {

				k = pow(2, i + j);

				if (j == 0)
					printf("%*d", digitos, k);
				else
					printf(" %*d", digitos, k);
			}
			printf("\n");
		}
		printf("\n");

	} while (1 > 0);

}