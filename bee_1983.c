#include <stdio.h>
#include <stdlib.h>

int main() {

    long int m, melhor_aluno;
    int n, i;
    float nota, melhor_nota = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        scanf("%ld %f", &m, &nota);

        if (nota >= 8 && nota > melhor_nota) {
            melhor_aluno = m;
            melhor_nota = nota;
        }
    }

    if(melhor_nota < 8) {

        printf("Minimum note not reached\n");
    }
    else {

        printf("%ld\n", melhor_aluno);
    }

    return 0;
}
