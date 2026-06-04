#include <stdio.h>

int main()
{
    int n;
    int i, j;

    printf("Enter the number of rows for the number-triangle pattern.\n");
    scanf("%d", &n);

    printf("\nNumber-triangle pattern:\n\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}