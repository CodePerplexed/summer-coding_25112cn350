#include <stdio.h>

int main()
{
    int n, c = 0, i, j;

    printf("Enter range 'n' to print all prime numbers in range.\n");
    scanf("%d", &n);
    
    // Printing all prime numbers upto 'n'
    for (j = 2; j <= n; j++)
    {
        c = 0;
        // Finding the factors of a number
        for (i = 1; i <= j; i++)
        {
            if (j % i == 0)
                c++;
        }

        // Checking if a number is prime or not
        if (c == 2)
            printf("%d\n", j);
    }
    return 0;
}