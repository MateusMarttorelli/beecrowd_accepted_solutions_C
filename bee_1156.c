#include <stdio.h>

int main() {

	int i;
	float j = 1, s = 0;

	for (i = 1; i <= 39; i += 2) {
		
		s += i / j;
		j *= 2;
	}

	printf("%.2f\n", s);

	return 0;
}