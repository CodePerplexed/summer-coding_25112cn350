#include <stdio.h>

int main()
{
    int n;
    int i, j;

    printf("Enter the number of rows for the reversed number-triangle pattern.\n");
    scanf("%d", &n);

    printf("\nReversed Number-triangle pattern:\n\n");
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}