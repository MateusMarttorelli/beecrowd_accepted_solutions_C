#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, i, mult2 = 0, mult3 = 0, mult4 = 0, mult5 = 0;

    scanf("%d", &n);

    int *l = (int*)malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {

        scanf("%d", &l[i]);

        if (l[i] % 2 == 0)
            mult2++;
        if (l[i] % 3 == 0)
            mult3++;
        if (l[i] % 4 == 0)
            mult4++;
        if (l[i] % 5 == 0)
            mult5++;
    }

    printf("%d Multiplo(s) de 2\n", mult2);
    printf("%d Multiplo(s) de 3\n", mult3);
    printf("%d Multiplo(s) de 4\n", mult4);
    printf("%d Multiplo(s) de 5\n", mult5);

    return 0;
}
