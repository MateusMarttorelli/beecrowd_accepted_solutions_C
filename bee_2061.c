#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int n, m, i;
    char acao[10];

    scanf("%d %d", &n, &m);

    for (i = 0; i < m; i++) {

        fflush(stdin);
        gets(acao);

        if (strcmp(acao, "fechou") == 0)
            n += 1;
        else
            n -= 1;
    }

    printf("%d\n", n);

    return 0;
}
