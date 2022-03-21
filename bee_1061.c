#include <stdio.h>

int main() {

	int dia_inicial, hora_inicial, min_inicial, seg_inicial, dia_final, hora_final, min_final, seg_final, dia_total, hora_total, min_total, seg_total;

	scanf("Dia %d", &dia_inicial);
	scanf("%d : %d : %d\n", &hora_inicial, &min_inicial, &seg_inicial);
	scanf("Dia %d", &dia_final);
	scanf("%d : %d : %d", &hora_final, &min_final, &seg_final);

	seg_total = seg_final - seg_inicial;
	min_total = min_final - min_inicial;
	hora_total = hora_final - hora_inicial;
	dia_total = dia_final - dia_inicial;

	if (seg_total < 0) {
		seg_total += 60;
		min_total--;
	}

	if (min_total < 0) {
		min_total += 60;
		hora_total--;
	}

	if (hora_total < 0) {
		hora_total += 24;
		dia_total--;
	}

	printf("%d dia(s)\n", dia_total);
	printf("%d hora(s)\n", hora_total);
	printf("%d minuto(s)\n", min_total);
	printf("%d segundo(s)\n", seg_total);

	return 0;
}