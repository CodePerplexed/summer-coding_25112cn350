#include <stdio.h>

int main()
{
    int n;
    int i, j;

    printf("Enter the number of rows for the character-triangle pattern.\n");
    scanf("%d", &n);

    printf("\nCharacter-triangle pattern:\n\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c ", ('A' + j));
        }
        printf("\n");
    }

    return 0;
}