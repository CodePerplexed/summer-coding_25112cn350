#include <stdio.h>

// Calculates the gcd by recursion
int gcd_calc(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd_calc(b, (a % b));
    }
}

int main()
{
    int a, b, gcd = 0;
    printf("Enter two numbers.\n");
    scanf("%d %d", &a, &b);

    if ((a > 0) && (b > 0))
    {
        if (a > b)
        {
            gcd = gcd_calc(a, b);
        }
        else
        {
            gcd = gcd_calc(b, a);
        }
    }

    printf("GCD = %d\n", gcd);
    return 0;
}
