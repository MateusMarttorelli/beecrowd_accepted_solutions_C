#include <stdio.h>
#include <stdlib.h>

int main() {

    long long unsigned int n;

    scanf("%llu", &n);

    while (n > 0) {

        printf("%d", n % 10);
        n /= 10;
    }
    printf("\n");

    return 0;
}
