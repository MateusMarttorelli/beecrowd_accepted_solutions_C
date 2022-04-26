#include <stdio.h>

int main() {

	int n, n1 = 0, n2 = 1, n3, i;

	scanf("%d", &n);

	switch (n) {

		case 1: {
			printf("0\n");
			break;
		}
		case 2: {
			printf("0 1\n");
			break;
		}
		default: {

			printf("0 1 ");

			for (i = 0; i < n - 3; i++) {
				n3 = n1 + n2;
				n1 = n2;
				n2 = n3;
				printf("%d ", n3);
			}

			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
			printf("%d\n", n3);
			break;
		}
	}

	return 0;
}