#include <stdio.h>

int main() {

	int i, n, cont_positivo = 0, cont_negativo = 0, cont_par = 0, cont_impar = 0;

	for (i = 0; i < 5; i++) {

		scanf("%d", &n);

		if (n % 2 == 0) {
			cont_par++;
		}
		else {
			cont_impar++;
		}

		if (n > 0) {
			cont_positivo++;
		}
		else if (n < 0) {
			cont_negativo++;
		}
		
	}

	printf("%d valor(es) par(es)\n", cont_par);
	printf("%d valor(es) impar(es)\n", cont_impar);
	printf("%d valor(es) positivo(s)\n", cont_positivo);
	printf("%d valor(es) negativo(s)\n", cont_negativo);

	return 0;
}