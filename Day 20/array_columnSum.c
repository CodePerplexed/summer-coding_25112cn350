#include <stdio.h>
int main()
{
    int c, r, a[10][10], cs, i, j;

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
        }
        printf("\n");
    }

    for (i = 0; i < c; i++)
    {
        cs = 0;

        for (j = 0; j < r; j++)
        {
            cs = cs + a[j][i];
        }

        printf("\nThe sum of elements of column %d = %d", (i + 1), cs);
    }

    return 0;
}