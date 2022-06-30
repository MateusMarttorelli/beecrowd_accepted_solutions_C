#include <stdio.h>

int main() {

	int a, b, c, d, resposta = 0;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	if (a + b > c && a + c > b && b + c > a)
		resposta++;

	else if (a + c > d && a + d > c && c + d > a)
		resposta++;

	else if (a + b > d && a + d > b && b + d > a)
		resposta++;

	else if (b + c > d && b + d > c && c + d > b)
		resposta++;

	if (resposta > 0)
		printf("S\n");
	else
		printf("N\n");	

	return 0;
}