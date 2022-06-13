#include <stdio.h>
#include <math.h>

int main() {

	int A, B, C, area, areatotal;

	do {

		scanf("%d", &A);
		if (A == 0)
			return 0;

		scanf("%d", &B);
		if (B == 0)
			return 0;

		scanf("%d", &C);
		if (C == 0)
			return 0;

		area = A * B;

		areatotal = (area * 100) / C;

		printf("%d\n", (int)sqrt(areatotal));

	} while (1 > 0);
}