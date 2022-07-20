#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, j, n, caso = 1, numeros;

    while(scanf("%d", &n) != EOF) {

        numeros = 1;

        for (i = 0; i <= n; i++) {

            numeros += i;
        }

        if (n > 1) {
            printf("Caso %d: %d numeros\n", caso, numeros);
        }
        else {
            printf("Caso %d: %d numero\n", caso, numeros);
        }

        printf("0");
        for (i = 1; i <= n; i++) {
            for (j = 0; j < i; j++) {

                printf("% d", i);
            }
        }
        printf("\n\n");

        caso++;
    };

    return 0;
}
