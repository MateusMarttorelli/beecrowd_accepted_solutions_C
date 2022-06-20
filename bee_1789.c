#include <stdio.h>

int main() {

	int l, v, i, maior;

	while (scanf("%d", &l) != EOF) {

		maior = 0;

		for (i = 0; i < l; i++) {

			scanf("%d", &v);

			if (v > maior)
				maior = v;
		}

		if (maior < 10)
			printf("1\n");

		else if ((maior >= 10) & (maior < 20))
			printf("2\n");

		else
			printf("3\n");
	}

	return 0;
}