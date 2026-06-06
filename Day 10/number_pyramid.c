#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i, j;
    int num;

    printf("Enter the number of rows for the number-pyramid pattern.\n");
    scanf("%d", &n);

    printf("\nNumber-pyramid Pattern:\n\n");
    for (i = 0; i < n; i++)
    {
        for (j = 1; j < (2 * n); j++)
        {
            if (j < (n - i) || j > (n + i))
                printf(" ");
            else
            {
                num = i + 1 - abs(n - j);
                printf("%d", num);
            }
                
        }
        printf("\n");
    }

    return 0;
}