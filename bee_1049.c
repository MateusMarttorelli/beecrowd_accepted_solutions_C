#include <stdio.h>
#include <string.h>

int main() {

	char caracteristica_1[15], caracteristica_2[15], caracteristica_3[15];
	int soma = 0;

	scanf("%s %s %s", &caracteristica_1, &caracteristica_2, &caracteristica_3);

	if (strcmp(caracteristica_1, "vertebrado") == 0) {
		soma += 1;
	}
	else if (strcmp(caracteristica_1, "invertebrado") == 0) {
		soma += 2;
	}

	if (strcmp(caracteristica_2, "ave") == 0) {
		soma += 4;
	}
	else if (strcmp(caracteristica_2, "mamifero") == 0) {
		soma += 8;
	}
	else if (strcmp(caracteristica_2, "inseto") == 0) {
		soma += 16;
	}
	else if (strcmp(caracteristica_2, "anelideo") == 0) {
		soma += 32;
	}

	if (strcmp(caracteristica_3, "carnivoro") == 0) {
		soma += 64;
	}
	else if (strcmp(caracteristica_3, "onivoro") == 0) {
		soma += 128;
	}
	else if (strcmp(caracteristica_3, "herbivoro") == 0) {
		soma += 512;
	}
	else if (strcmp(caracteristica_3, "hematofago") == 0) {
		soma += 1024;
	}

	switch (soma)
	{
		case 69: {
			printf("aguia\n");
			break;
		}
		case 133: {
			printf("pomba\n");
			break;
		}
		case 137: {
			printf("homem\n");
			break;
		}
		case 521: {
			printf("vaca\n");
			break;
		}
		case 1042: {
			printf("pulga\n");
			break;
		}
		case 530: {
			printf("lagarta\n");
			break;
		}
		case 1058: {
			printf("sanguessuga\n");
			break;
		}
		case 162: {
			printf("minhoca\n");
			break;
		}
	}

	return 0;
}