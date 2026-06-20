#include <stdio.h>
int main()
{
    int c1, r1, c2, r2, a[10][10], b[10][10], s[10][10], i, j;

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

    if (r1 != r2 || c1 != c2)
    {
        printf("Summing can't be done on matrices with unequal sizes.");
        return 0;
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            s[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum of Matrices:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }

    return 0;
}