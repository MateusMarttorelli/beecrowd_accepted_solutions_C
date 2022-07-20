#include <stdio.h>
#include <stdlib.h>

int main() {

    int participante[5], tipo, i, respostas = 0;

    scanf("%d", &tipo);

    for (i = 0; i < 5; i++) {

        scanf("%d", &participante[i]);
    }

    for (i = 0; i < 5; i++) {

        if (participante[i] == tipo) {
            respostas++;
        }
    }

    printf("%d\n", respostas);

    return 0;
}
