#include <stdio.h>

// Finding the factorial of a number by recursion
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * factorial(n - 1));
}
int main()
{
    int n;

    printf("Enter a number.\n");
    scanf("%d", &n);

    printf("Factorial = %d", factorial(n));
    return 0;
}