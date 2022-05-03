#include <stdio.h>

int main() {

	int i = 0;
	float A[100], x;

	do {

		scanf("%f", &x);

		if (x <= 10) {

			A[i] = x;
			printf("A[%d] = %.1f\n", i, x);
		}
			
		i++;

	} while (i < 100);

	return 0;
}