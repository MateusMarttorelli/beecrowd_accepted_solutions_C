#include <stdio.h>
#include <stdlib.h>

int main() {

    int s, t, f, hora;

    scanf("%d %d %d", &s, &t, &f);

    hora = s + t + f;

    if (hora >= 24) {

        printf("%d\n", hora - 24);
    }
    else if (hora < 0) {

        printf("%d\n", 24 + hora);
    }
    else {

        printf("%d\n", hora);
    }

    return 0;
}
