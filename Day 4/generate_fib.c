#include <stdio.h>

// Finds the fibonacci term at (n)th position
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
    int i, n;

    printf("Enter the number of terms in fibonacci series.\n");
    scanf("%d", &n);
    
    // Printing the fibonacci series
    for (i = 1; i <= n; i++)
    {
        printf("%d ", fib(i));
    }

    return 0;
}