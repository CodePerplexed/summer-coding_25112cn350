// Perfect number is a number who sum of factors is equal to the original number.
// Example: 6 = 1 + 2 + 3

#include <stdio.h>
#include <stdbool.h>

// Checking if a number is perfect or not
bool perfect(int n)
{
    int sum = 0, i;

    // Finding the sum of proper divisors of a number
    for (i = 1; i < n; i++)
        if (n % i == 0)
            sum = sum + i;

    if (sum == n)
        return true;
    else
        return false;
}
int main()
{
    int n;

    printf("Enter a number.\n");
    scanf("%d", &n);

    if (perfect(n) == true)
        printf("%d is a Perfect Number.", n);
    else
        printf("%d is not a Perfect Number.", n);
        
    return 0;
}