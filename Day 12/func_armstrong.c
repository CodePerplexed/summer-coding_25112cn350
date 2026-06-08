#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool armstrong(int n)
{
    int n1, c = 0;
    double sum = 0;
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

    if ((int)sum == n) // condition for armstrong number
        return true;
    else
        return false;
}

int main()
{
    int n;

    printf("Enter a number.\n");
    scanf("%d", &n);

    if (armstrong(n) == true)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);
    return 0;
}