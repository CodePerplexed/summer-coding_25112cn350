#include <stdio.h>
#include <math.h>

int main()
{
    int n, n1, c = 0;
    double sum = 0;

    printf("Enter a number.\n");
    scanf("%d", &n);

    n1 = n; // Copying the original number

    // Counting the number of digits
    while (n1 != 0)
    {
        c++;
        n1 = n1 / 10;
    }

    n1 = n;

    // Finding the sum of power of digits to the number of digits
    while (n1 != 0)
    {
        sum = sum + pow(n1 % 10, c);
        n1 = n1 / 10;
    }

    if ((int)sum == n)
        printf("\nArmstrong number.");
    else
        printf("\nNot an Armstrong number.");
    return 0;
}