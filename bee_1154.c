#include <stdio.h>

int main() {

	int n, cont = 0;
	float soma = 0;

	do {
		scanf("%d", &n);

		if (n < 0){
			break;
		}

		soma += n;
		cont++;

	} while (n > 0);

	printf("%.2f\n", soma / cont);

	return 0;
}