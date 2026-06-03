#include <stdio.h>
#include <stdlib.h>

// Finds the fibonacci term at (n)th position by recursion
int fib(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n, i = 2;

    printf("Enter the range 'n' to print the fibonacci series.\n");
    scanf("%d", &n);

    // Handles out of bounds case
    if (n < 0)
    {
        printf("Invalid Range.");
        exit(1);
    }

    // Prints fibonacci series upto range 'n'
    printf("%d", fib(1));
    while (fib(i) <= n)
    {
        printf(", %d", fib(i));
        i = i + 1;
    }

    return 0;
}