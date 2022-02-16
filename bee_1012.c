#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main() {

	double a, b, c, triangulo, circulo, trapezio, quadrado, retangulo;

	scanf("%lf %lf %lf", &a, &b, &c);

	triangulo = (a * c) / 2;
	circulo = pi * pow(c, 2);
	trapezio = ((a + b) * c) / 2;
	quadrado = pow(b, 2);
	retangulo = a * b;

	printf("TRIANGULO: %.3lf\n", triangulo);
	printf("CIRCULO: %.3lf\n", circulo);
	printf("TRAPEZIO: %.3lf\n", trapezio);
	printf("QUADRADO: %.3lf\n", quadrado);
	printf("RETANGULO: %.3lf\n", retangulo);

	return 0;
}