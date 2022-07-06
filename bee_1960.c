#include <stdio.h>

int main() {

	int n, i = 0, decimal[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
	char *romano[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

	scanf("%d", &n);

	while (n) {

		while (n / decimal[i]) {

			printf("%s", romano[i]);
			n -= decimal[i];
		}
		i++;

	}

	printf("\n");

	return 0;
}