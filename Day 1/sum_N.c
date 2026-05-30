#include <stdio.h>

int main()
{
    int N, sum = 0, i;

    printf("Enter range 'N' to print the sum of natural numbers.\n");
    scanf("%d", &N);

    // Finding the sum of all numbers from 1 to 'N'
    for (i = 1; i <= N; i++)
        sum = sum + i;

    // Printing the sum
    printf("Sum of natural numbers upto 'N' = %d", sum);
    return 0;
}