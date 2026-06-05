#include <stdio.h>

int main()
{
    int n;
    int i, j;

    printf("Enter the number of rows for the hollow-square pattern.\n");
    scanf("%d", &n);

    printf("\nHollow-square Pattern:\n\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == (n - 1) || j == (n - 1))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}