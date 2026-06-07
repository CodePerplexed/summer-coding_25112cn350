#include <stdio.h>

// Finding the factorial of a number
int factorial(int n)
{
    int f = 1, i;
    
    for (i = 1; i <= n; i++)
        f = f * i;

    return f;
}

int main()
{
    int n;

    printf("Enter a number.\n");
    scanf("%d", &n);

    printf("Factorial = %d", factorial(n));
    return 0;
}