#include <stdio.h>

int main()
{
    int n;
    int i, j;

    printf("Enter the number of rows for the reverse-star pattern.\n");
    scanf("%d", &n);

    printf("\nReverse-star pattern:\n\n");
    for (i = n; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}