#include <stdio.h>

int main()
{
    int n;
    int i, j;

    printf("Enter the number of rows for the repeated-number pattern.\n");
    scanf("%d", &n);

    printf("\nRepeated-number pattern:\n\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}