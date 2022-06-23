#include <stdio.h>

int main() {

	char piscada[10];
	int numero, cont = 0;

	do {

		numero = 0;

		while (1) {

			gets(piscada);

			if (piscada[0] == 'c')
				break;

			if (piscada[0] == '*')
				numero += 4;
			if (piscada[1] == '*')
				numero += 2;
			if (piscada[2] == '*')
				numero += 1;

		}

		printf("%d\n", numero);
		cont++;

	} while (cont < 3);

	return 0;
}