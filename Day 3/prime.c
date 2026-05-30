#include <stdio.h>

int main()
{
    int n, c = 0, i;

    printf("Enter a number.\n");
    scanf("%d", &n);

    // Finding the factors of a number
    for (i = 1; i <= n; i++)
        if (n % i == 0)
            c++;

    // Checking if a number is prime or not
    if (c == 2)
        printf("Prime Number.");
    else
        printf("Not a Prime Number.");

    return 0;
}