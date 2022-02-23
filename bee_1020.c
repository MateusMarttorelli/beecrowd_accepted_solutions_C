#include <stdio.h>
#include <stdlib.h>

int main() {

	int tempo, anos, meses, dias;

	scanf("%d", &tempo);

	anos = tempo / 365;
	meses = (tempo - anos * 365) / 30;
	dias = tempo - anos * 365 - meses * 30;

	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);

	return 0;
}