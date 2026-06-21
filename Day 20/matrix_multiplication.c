#include <stdio.h>
int main()
{
    int c1, r1, c2, r2, a[10][10], b[10][10], m[10][10], i, j, k;

    printf("Enter the number of rows and columns of the first array respectively.\n");
    scanf("%d%d", &r1, &c1);

    printf("Enter %d elements into the array.\n", r1 * c1);
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter the number of rows and columns of the second array respectively.\n");
    scanf("%d%d", &r2, &c2);

    printf("Enter %d elements into the array.\n", r2 * c2);
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    if (c1 != r2)
    {
        printf("Multiplication can't be done on the matrices.");
        return 1;
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            m[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                m[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nMultiplication of Matrices:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%-2d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}