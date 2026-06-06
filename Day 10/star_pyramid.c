#include <stdio.h>

int main()
{
    int n;
    int i, j;

    printf("Enter the number of rows for the star-pyramid pattern.\n");
    scanf("%d", &n);

    printf("\nStar-pyramid Pattern:\n\n");
    for (i = 0; i < n; i++)
    {
        for (j = 1; j < (2 * n); j++)
        {
            if (j < (n - i) || j > (n + i))
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}