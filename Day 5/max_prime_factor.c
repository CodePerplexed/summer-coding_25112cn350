#include <stdio.h>

// Checking if a factor is Prime
int isPrime(int factor)
{
    int c = 0, i;

    for (i = 1; i <= factor; i++)
        if (factor % i == 0)
            c++;

    // Checking if a factor is prime or not
    if (c == 2)
        return 1;
    else
        return 0;
}

int main()
{
    int n, i;

    printf("Enter a number.\n");
    scanf("%d", &n);

    // Finding the largest prime factor
    for (i = n; i >= 1; i--)
    {
        if (n % i == 0 && isPrime(i))
        {
            printf("Largest Prime Factor = %d", i);
            break;
        }
    }
    
    return 0;
}