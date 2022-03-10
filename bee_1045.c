#include <stdio.h>
#include <math.h>

int main() {

	double a, b, c, trocador;

	scanf("%lf %lf %lf", &a, &b, &c);

	if (a < b) {
		trocador = a;
		a = b;
		b = trocador;
	}

	if (a < c) {
		trocador = a;
		a = c;
		c = trocador;
	}

	if (b < c) {
		trocador = b;
		b = c;
		c = trocador;
	}

	if (a >= b + c) {
		printf("NAO FORMA TRIANGULO\n");
	}
	else if (pow(a, 2) == pow(b, 2) + pow(c, 2)) {
		printf("TRIANGULO RETANGULO\n");
	}
	else if (pow(a, 2) > pow(b, 2) + pow(c, 2)) {
		printf("TRIANGULO OBTUSANGULO\n");
	}
	else if (pow(a, 2) < pow(b, 2) + pow(c, 2)) {
		printf("TRIANGULO ACUTANGULO\n");
	}

	if (a == b && a == c && b == c) {
		printf("TRIANGULO EQUILATERO\n");
	}
	else if (a == b || a == c || b == c) {
		printf("TRIANGULO ISOSCELES\n");
	}

	return 0;
}