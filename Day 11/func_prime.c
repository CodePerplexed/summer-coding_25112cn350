#include <stdio.h>
#include <stdbool.h>

// Checking if a number is prime or not
bool prime(int n)
{
    int c = 0, i;

    // Finding the factors of a number
    for (i = 1; i <= n; i++)
        if (n % i == 0)
            c++;

    if (c == 2) // condition for prime number
        return true;
    else
        return false;
}

int main()
{
    int n;

    printf("Enter a number.\n");
    scanf("%d", &n);

    if (prime(n) == true)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);

    return 0;
}