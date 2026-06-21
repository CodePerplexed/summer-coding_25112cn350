#include <stdio.h>
#include <stdbool.h>

int main()
{
    int c, r, a[10][10], i, j;
    bool sym = true;

    printf("Enter the number of rows and columns of the matrix respectively.\n");
    scanf("%d%d", &r, &c);

    if (r != c)
    {
        printf("\nMatrix is non symmetrical.");
        return 0;
    }

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
        for (j = 0; j < r; j++)
        {
            if (a[i][j] != a[j][i])
            {
                sym = false;
                break;
            }
        }
    }

    if (sym == false)
        printf("\nMatrix is non symmetrical.");
    else
        printf("\nMatrix is symmetrical.");

    return 0;
}