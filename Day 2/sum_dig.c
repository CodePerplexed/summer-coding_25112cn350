#include <stdio.h>

int main()
{
    int n, sum = 0, i;

    printf("Enter a number.\n");
    scanf("%d", &n);

    // Finding the sum of digits in a number
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    printf("Sum of digits = %d", sum);
    return 0;
}