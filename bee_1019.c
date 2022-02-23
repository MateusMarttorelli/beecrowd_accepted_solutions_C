#include <stdio.h>

int main() {

	int tempo, horas, minutos, segundos;

	scanf("%d", &tempo);

	horas = tempo / 3600;
	minutos = (tempo - horas * 3600) / 60;
	segundos = (tempo - horas * 3600 - minutos * 60);

	printf("%d:%d:%d\n", horas, minutos, segundos);

	return 0;
}