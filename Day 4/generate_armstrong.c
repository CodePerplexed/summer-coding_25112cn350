#include <stdio.h>
#include <math.h>

int main()
{
    int n, i1, c = 0, sum = 0, i;

    printf("Enter a range 'n' to generate armstrong numbers.\n");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        i1 = i; // Copying the original number
        c = 0;
        // Counting the number of digits
        while (i1 != 0)
        {
            c++;
            i1 = i1 / 10;
        }

        i1 = i;
        sum = 0;
        // Finding the sum of power of digits to the number of digits
        while (i1 != 0)
        {
            sum = sum + pow(i1 % 10, c);
            i1 = i1 / 10;
        }

        if (sum == i) // Printing the number if it's armstrong
            printf("%d ", i);
    }

    return 0;
}