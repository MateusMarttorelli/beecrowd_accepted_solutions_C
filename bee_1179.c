#include <stdio.h>

int main() {

	int i, j = 0, k = 0, x, par[5], impar[5], cont1 = 0, cont2 = 0;

	for (i = 0; i < 15; i++) {

		scanf("%d", &x);

		if (x % 2 == 0) {
			par[j] = x;
			j++;
			cont1 += 1;

			if (j >= 5) {

				printf("par[0] = %d\n", par[0]);
				printf("par[1] = %d\n", par[1]);
				printf("par[2] = %d\n", par[2]);
				printf("par[3] = %d\n", par[3]);
				printf("par[4] = %d\n", par[4]);

				j = 0;
				cont1 = 0;
			}
		}
		else {
			impar[k] = x;
			k++;
			cont2 += 1;

			if (k >= 5) {

				printf("impar[0] = %d\n", impar[0]);
				printf("impar[1] = %d\n", impar[1]);
				printf("impar[2] = %d\n", impar[2]);
				printf("impar[3] = %d\n", impar[3]);
				printf("impar[4] = %d\n", impar[4]);

				k = 0;
				cont2 = 0;
			}
		}
	}

	for (i = 0; i < cont2; i++) {

		printf("impar[%d] = %d\n", i, impar[i]);
	}

	for (i = 0; i < cont1; i++) {

		printf("par[%d] = %d\n", i, par[i]);
	}

	return 0;
}