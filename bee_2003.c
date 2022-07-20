#include <stdio.h>
#include <stdlib.h>

int main(){

    int horas, minutos, atraso;

    while(scanf("%d:%d", &horas, &minutos) != EOF){

        atraso = (((horas * 60) + minutos + 60) - 480);

        if(atraso > 0) {

            printf("Atraso maximo: %d\n", atraso);
        }
        else {

            printf("Atraso maximo: 0\n");
        }
    }

	 return 0;
}
