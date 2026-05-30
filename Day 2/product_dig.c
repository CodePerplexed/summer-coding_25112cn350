#include <stdio.h>

int main()
{
    int n, p = 1, i;

    printf("Enter a number.\n");
    scanf("%d", &n);

    // Finding the product of digits in a number
    while (n != 0)
    {
        p = p * (n % 10);
        n = n / 10;
    }

    printf("Product of digits = %d", p);
    return 0;
}