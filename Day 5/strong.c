// Strong number example: 145 = 1! + 4! + 5!

#include <stdio.h>

int factorial(int);

int main()
{
    int n, n1, sum = 0;

    printf("Enter a number.\n");
    scanf("%d", &n);

    n1 = n; // Copying the original number

    // Finding the sum of factorial of digits of a number
    while (n1 != 0)
    {
        sum = sum + factorial(n1 % 10);
        n1 = n1 / 10;
    }

    // Checking if a number is strong or not
    if (sum == n)
        printf("Strong Number.");
    else
        printf("Not a Strong Number.");

    return 0;
}

// Finding the factorial of a digit
int factorial(int d)
{
    int f = 1, i;
    for (i = 1; i <= d; i++)
        f = f * i;
    return f;
}