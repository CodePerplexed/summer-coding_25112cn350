#include <stdio.h>

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
    int n;

    printf("Enter the (n)th term to be found in the fibonacci series.\n");
    scanf("%d", &n);

    // Printins the (n)th term of fibonacci series
    printf("(%d)th term of the Fibonacci Series = %d", n, fib(n));

    return 0;
}