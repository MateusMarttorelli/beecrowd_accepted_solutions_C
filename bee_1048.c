#include <stdio.h>

int main() {

	float sal, sal_total, ganho;
	int perc;

	scanf("%f", &sal);

	if (sal > 0 && sal <= 400) {
		sal_total = sal * 1.15;
		ganho = sal / 100 * 15;
		perc = 15;
	}
	else if (sal > 400 && sal <= 800) {
		sal_total = sal * 1.12;
		ganho = sal / 100 * 12;
		perc = 12;
	}
	else if (sal > 800 && sal <= 1200) {
		sal_total = sal * 1.10;
		ganho = sal / 100 * 10;
		perc = 10;
	}
	else if (sal > 1200 && sal <= 2000) {
		sal_total = sal * 1.07;
		ganho = sal / 100 * 7;
		perc = 7;
	}
	else if (sal > 2000) {
		sal_total = sal * 1.04;
		ganho = sal / 100 * 4;
		perc = 4;
	}

	printf("Novo salario: %.2f\n", sal_total);
	printf("Reajuste ganho: %.2f\n", ganho);
	printf("Em percentual: %d %%\n", perc);

	return 0;
}