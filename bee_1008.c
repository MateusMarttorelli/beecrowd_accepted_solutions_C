#include <stdio.h>

int main() {

	int numero, horas;
	float din_h, sal_final;

	scanf("%d %d %f", &numero, &horas, &din_h);

	sal_final = horas * din_h;

	printf("NUMBER = %d\n", numero);
	printf("SALARY = U$ %.2f\n", sal_final);

	return 0;
}