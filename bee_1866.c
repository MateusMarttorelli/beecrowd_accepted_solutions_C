#include <stdio.h>

int main() {

	int n, i, c;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {

		scanf("%d", &c);

		if ((c % 2) == 0)
			printf("0\n");
		else
			printf("1\n");
	}

	return 0;
}