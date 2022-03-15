#include <stdio.h>

int main() {

	double renda, imposto = 0;

	scanf("%lf", &renda);

	if (renda <= 2000) {
		printf("Isento\n");
	}
	else if (renda > 2000 && renda <= 3000) {
		renda -= 2000;
		imposto += renda * 8 / 100;
		printf("R$ %.2lf\n", imposto);
	}
	else if (renda > 3000 && renda <= 4500) {
		renda -= 3000;
		imposto += 79.9992;
		imposto += renda * 18 / 100;
		printf("R$ %.2lf\n", imposto);
	}
	else {
		renda -= 4500;
		imposto += 79.9992;
		imposto += 269.9982;
		imposto += renda * 28 / 100;
		printf("R$ %.2lf\n", imposto);
	}

	return 0;
}