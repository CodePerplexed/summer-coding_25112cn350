// Example: 34 = 4 × 10^1 + 3 × 10^0 = 43

#include <stdio.h>
#include <math.h>

// Reversing a number by recursion
int rev_num(int n, int i)
{
    if (n == 0)
        return 0;
    else
        return (pow(10, i) * (n % 10)) + rev_num(n / 10, i - 1);
}

int main()
{
    int n, n1, c = 0;
    printf("Enter a number.\n");
    scanf("%d", &n);

    n1 = n;
    while (n1 != 0)
    {
        c++;
        n1 = n1 / 10;
    }

    printf("Reversed number = %d", rev_num(n, c - 1)); 
    return 0;
}