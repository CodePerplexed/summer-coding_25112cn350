#include <stdio.h>

// Finding the sum of digits in a number by recursion
int sum_dig(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 10) + sum_dig(n / 10);
}

int main()
{
    int n;

    printf("Enter a number.\n");
    scanf("%d", &n);

    printf("Sum of digits = %d", sum_dig(n));
    return 0;
}