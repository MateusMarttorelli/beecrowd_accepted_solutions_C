#include <stdio.h>
#include <string.h>

int main() {

	char nome[10];
	int n, i, forca;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {

		scanf("%s %d", &nome, &forca);

		if (strcmp(nome, "Thor") == 0)
			printf("Y\n");
		else
			printf("N\n");
	}

	return 0;
}