// Example: 2^3 = 2 × 2 × 2 = 8

#include <stdio.h>

int main()
{
    int n, i, power;
    int result = 1;

    printf("Enter a number as well its power.\n");
    scanf("%d %d", &n, &power);

    // Multiplies by the number repeatedly by itself
    for(i = 1; i <= power; i++)
        result = result * n;

    printf("Result = %d", result);

    return 0;
}