// Perfect number is a number who sum of factors is equal to the original number.
// Example: 6 = 1 + 2 + 3

#include <stdio.h>

int main()
{
    int n, sum = 0, i;

    printf("Enter a number.\n");
    scanf("%d", &n);

    // Finding the sum of proper divisors of a number
    for (i = 1; i < n; i++)
        if (n % i == 0)
            sum = sum + i;

    // Checking if a number is perfect or not
    if (sum == n)
        printf("Perfect Number.");
    else
        printf("Not a Perfect Number.");

    return 0;
}