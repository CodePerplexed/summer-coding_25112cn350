#include <stdio.h>
int main()
{
    int c, r, a[10][10], ds = 0, i, j;

    printf("Enter the number of rows and columns of the matrix respectively.\n");
    scanf("%d%d", &r, &c);

    printf("Enter %d elements into the matrix.\n", r * c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("\nOriginal Matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);

            if (i == j || (i + j == c - 1))
                ds = ds + a[i][j];
        }
        printf("\n");
    }

    printf("\nThe sum of diagonal elements in the matrix = %d", ds);
    return 0;
}