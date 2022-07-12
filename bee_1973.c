#include <stdio.h>
#include <stdlib.h>

int main() {

    long long int n;
    scanf("%lld", &n);

    long long int estrela[n], i, total = 0, casa_atual = 0, roubados = 0, atacado = -1;

    for (i = 0; i < n; i++) {

       scanf("%lld", &estrela[i]);
       total += estrela[i];
    }

    do {

        if (casa_atual > atacado && estrela[casa_atual] > 0) {
            atacado++;
        }

        if (estrela[casa_atual] % 2 != 0) {

            if (estrela[casa_atual] > 0) {
                roubados++;
                estrela[casa_atual]--;
            }
            casa_atual++;
        }
        else {

            if (estrela[casa_atual] > 0) {
                roubados++;
                estrela[casa_atual]--;
            }
            casa_atual--;
        }

    } while (casa_atual >= 0 && casa_atual < n);

    printf("%lld %lld\n", atacado + 1, total - roubados);

    return 0;
}
