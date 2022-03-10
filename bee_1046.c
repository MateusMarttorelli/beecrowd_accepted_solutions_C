#include <stdio.h>

int main() {

	int h_inicial, h_final, h_total;

	scanf("%d %d", &h_inicial, &h_final);

	if (h_final > h_inicial) {
		h_total = h_final - h_inicial;
	}
	else if (h_final < h_inicial) {
		h_total = (h_final + 24) - h_inicial;
	}
	else if (h_final == h_inicial) {
		h_total = 24;
	}

	printf("O JOGO DUROU %d HORA(S)\n", h_total);

	return 0;
}