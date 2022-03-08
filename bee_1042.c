#include <stdio.h>

int main() {

	int a, b, c, n1, n2, n3, trocador;

	scanf("%d %d %d", &a, &b, &c);

	n1 = a;
	n2 = b;
	n3 = c;

	if (n1 > n2)
	{
		trocador = n1;
		n1 = n2;
		n2 = trocador;
	}
	if (n1 > n3)
	{
		trocador = n1;
		n1 = n3;
		n3 = trocador;
	}
	if (n2 > n3)
	{
		trocador = n2;
		n2 = n3;
		n3 = trocador;
	}

	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", n1, n2, n3, a, b, c);

	return 0;
}