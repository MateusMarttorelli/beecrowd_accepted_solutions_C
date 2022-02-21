#include <stdio.h>

int main() {

	int horas, vel_media;
	float gasto;

	scanf("%d %d", &horas, &vel_media);

	gasto = (horas * vel_media) / 12.0;

	printf("%.3f\n", gasto);

	return 0;
}