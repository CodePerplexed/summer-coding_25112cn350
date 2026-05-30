#include <stdio.h>

int main()
{
    int n, c = 0, i;

    printf("Enter a number.\n");
    scanf("%d", &n);

    // Finding the number of digits in a number
    while (n != 0)
    {
        c++;
        n = n / 10;
    }

    printf("Number of digits = %d", c);
    return 0;
}