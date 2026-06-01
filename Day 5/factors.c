#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a number.\n");
    scanf("%d", &n);

    // Printing the factors of a number
    printf("1");
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf(", %d", i);
        }
    }

    return 0;
}