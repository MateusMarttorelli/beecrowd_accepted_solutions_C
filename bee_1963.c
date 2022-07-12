#include <stdio.h>

int main() {

	double valor1, valor2, aumento;

	scanf("%lf %lf", &valor1, &valor2);

	aumento = ((valor2 / valor1) * 100) - 100;

	printf("%.2lf%%\n", aumento);

	return 0;
}