#include <stdio.h>
int main()
{
    int c, r, a[10][10], rs, i, j;

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

    for (i = 0; i < r; i++)
    {
        rs = 0;

        for (j = 0; j < c; j++)
        {
            rs = rs + a[i][j];
        }

        printf("\nThe sum of elements of row %d = %d", (i + 1), rs);
    }

    return 0;
}