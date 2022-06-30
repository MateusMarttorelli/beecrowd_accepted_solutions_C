#include <stdio.h>

int main() {

	int t[4];

	scanf("%d %d %d %d", &t[0], &t[1], &t[2], &t[3]);

	printf("%d\n", t[0] + t[1] + t[2] + t[3] - 3);

	return 0;
}