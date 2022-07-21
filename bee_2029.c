#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double v, d, b;

    while (scanf("%lf %lf", &v, &d) != EOF){

        b = 3.14 * pow(d/2.0, 2);

        printf("ALTURA = %.2lf\n", v * 1.0 / b);
        printf("AREA = %.2lf\n", b);

    }

    return 0;
}
