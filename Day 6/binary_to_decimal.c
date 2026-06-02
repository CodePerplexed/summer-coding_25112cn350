// Conversion Example: 1011 = 1 × (2^0) + 1 × (2^1) + 0 × (2^2) + 1 × (2^3)

#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum = 0, i = 0, d, val;

    printf("Enter a number in binary form.\n");
    scanf("%d", &n);


    while (n != 0)
    {
        d = n % 10; // Finding the last digit
        val = d * pow(2, i++); // val = digit * (2 ^ i)
        sum = sum + val;
        n = n / 10;
    }

    printf("Decimal of the number = %d", sum);

    return 0;
}