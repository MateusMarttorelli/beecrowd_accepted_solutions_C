#include <stdio.h>
#include <math.h>

int main() {

	const double pi = 3.14159;
	double raio, area;

	scanf("%lf", &raio);

	area = pi * pow(raio, 2);

	printf("A=%.4lf\n", area);

	return 0;
}
