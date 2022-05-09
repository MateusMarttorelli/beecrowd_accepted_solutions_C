#include <stdio.h>

int main() {

	unsigned long long int Fib[61];
	int  i, T, N;

	Fib[0] = 0;
	Fib[1] = 1;

	for (i = 2; i < 61; i++) {

		Fib[i] = (Fib[i - 1] + Fib[i - 2]);
	}

	scanf("%d", &T);

	for (i = 0; i < T; i++) {

		scanf("%d", &N);
		printf("Fib(%d) = %lld\n", N, Fib[N]);
	}

	return 0;
}