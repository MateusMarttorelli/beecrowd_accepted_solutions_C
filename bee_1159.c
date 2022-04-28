#include <stdio.h>

int main() {

	int x, i = 0, s = 0;

	do {

		scanf("%d", &x);

		if (x == 0)
			break;

		do {

			if (x % 2 == 0) {
				s += x;
				i++;
			}
			x++;	

		} while (i < 5);

		printf("%d\n", s);
		s = 0;
		i = 0;

	} while (x != 0);

	return 0;
}