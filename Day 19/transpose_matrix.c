#include <stdio.h>
int main()
{
    int c, r, a[10][10], t[10][10], i, j;

    printf("Enter the number of rows and columns of the matrix respectively.\n");
    scanf("%d%d", &r, &c);

    printf("Enter %d elements into the matrix.\n", r * c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            t[i][j] = a[j][i];
        }
    }

    printf("\nOriginal Matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of Matrix:\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}