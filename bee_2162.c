#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *h, i, ctd = 1;

    scanf("%d", &n);

    h = (int*)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        scanf("%d", &h[i]);
    }

    if (n == 2 && h[0] == h[1])
    {
        ctd = 0;
    }
    else
    {
        for(i = 2; i < n; i++)
        {
            if(h[i] >= h[i-1] && h[i-1] >= h[i-2])
            {
                ctd = 0;
                break;
            }
            else if(h[i] <= h[i-1] && h[i-1] <= h[i-2])
            {
                ctd = 0;
                break;
            }
        }
    }

    if (ctd == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
