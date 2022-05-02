#include <stdio.h>

int main() {

	int PA, PB, anos = 0, t, i;
	float G1, G2;

	scanf("%d", &t);

	for (i = 0; i < t; i++) {

		scanf("%d %d %f %f", &PA, &PB, &G1, &G2);

		do {

			PA += (int)(PA * G1 / 100);
			PB += (int)(PB * G2 / 100);

			anos++;

			if (anos > 100) {
				break;
			}

		} while (PA <= PB);

		if (anos > 100) {
			printf("Mais de 1 seculo.\n");
		}
		else {
			printf("%d anos.\n", anos);
		}

		anos = 0;
	}

	return 0;
}