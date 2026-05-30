#include <stdio.h>

int main()
{
    int n, f = 1, i;

    printf("Enter a number.\n");
    scanf("%d", &n);

    // Finding the factorial of a number
    for (i = 1; i <= n; i++)
        f = f * i;

    printf("Factorial = %d", f);
    return 0;
}