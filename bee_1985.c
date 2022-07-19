#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, produto, quantidade;
    float total = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &produto, &quantidade);

        if (produto == 1001)
            total += 1.50 * quantidade;
        else if (produto == 1002)
            total += 2.50 * quantidade;
        else if (produto == 1003)
            total += 3.50 * quantidade;
        else if (produto == 1004)
            total += 4.50 * quantidade;
        else if (produto == 1005)
            total += 5.50 * quantidade;
    }

    printf("%.2f\n", total);

    return 0;
}
