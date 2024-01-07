#include <stdio.h>

void floyds(int b[3][3])
{
    int i, j, k;
    for (k = 0; k < 3; k++)
    {
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if ((b[i][k] * b[k][j] != 0) && (i != j))
                {
                    if ((b[i][k] + b[k][j] < b[i][j]) || (b[i][j] == 0))
                    {
                        b[i][j] = b[i][k] + b[k][j];
                    }
                }
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("\nMinimum Cost With Respect to Node: %d\n", i);
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
    }
}

int main()
{
    int b[3][3] = {0};
    printf("Nishant Khadka\nRoll:1017\n\n");

    printf("Enter the adjacency matrix (3x3):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    floyds(b);
    return 0;
}
