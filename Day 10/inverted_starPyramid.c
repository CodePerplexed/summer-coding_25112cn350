#include <stdio.h>

int main()
{
    int n;
    int i, j;

    printf("Enter the number of rows for the ineverted star-pyramid pattern.\n");
    scanf("%d", &n);

    printf("\nInverted Star-pyramid Pattern:\n\n");
    for (i = n - 1; i >= 0; i--)
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