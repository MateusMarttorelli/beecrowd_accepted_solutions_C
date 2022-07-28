#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, **matriz, i, j;

    scanf("%d %d", &n, &m);

    matriz = (int**)malloc(n * sizeof(int*));

    for (i = 0; i < n; i++)
    {
        matriz[i] = (int*)malloc(m * sizeof(int));
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 1; i < n - 1; i++)
    {
        for (j = 1; j < m - 1; j++)
        {
            if (matriz[i][j] != 42)
            {
                continue;
            }
            else
            {
                if (matriz[i-1][j-1] == 7 && matriz[i-1][j] == 7 && matriz[i-1][j+1] == 7 && matriz[i][j-1] == 7 && matriz[i][j+1] == 7 && matriz[i+1][j-1] == 7 && matriz[i+1][j] == 7 && matriz[i+1][j+1] == 7)
                {
                    printf("%d %d\n", i+1, j+1);
                    return 0;
                }
                else
                {
                    continue;
                }
            }
        }
    }

    printf("0 0\n");

    return 0;
}
