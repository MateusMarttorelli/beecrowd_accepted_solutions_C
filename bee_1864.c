#include <stdio.h>
#include <string.h>

int main() {

	char frase[100];
	int n, i;

	scanf("%d", &n);

	strcpy(frase, "LIFE IS NOT A PROBLEM TO BE SOLVED");

	for (i = 0; i < n; i++)
		printf("%c", frase[i]);

	printf("\n");

	return 0;
}