#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i, j;
    char ch;

    printf("Enter the number of rows for the character-pyramid pattern.\n");
    scanf("%d", &n);

    printf("\nCharacter-pyramid Pattern:\n\n");
    for (i = 0; i < n; i++)
    {
        for (j = 1; j < (2 * n); j++)
        {
            if (j < (n - i) || j > (n + i))
                printf(" ");
            else
            {
                ch = 'A' + i - abs(n - j);
                printf("%c", ch);
            }
                
        }
        printf("\n");
    }

    return 0;
}