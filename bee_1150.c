#include <stdio.h>

int main() {

	int x, y, n = 0, soma = 0;

	scanf("%d", &x);

	do {
		scanf("%d", &y);
	} while (y <= x);

	do {
		soma += x;
		n++;
		x++;

	} while (soma <= y);

	printf("%d\n", n);


	return 0;
}