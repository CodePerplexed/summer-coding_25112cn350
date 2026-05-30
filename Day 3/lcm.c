#include <stdio.h>

// Calculates the lcm by recursion
int lcm_calc(int a, int b, int i)
{
    if (a == 1 && b == 1)
        return 1;
    else if ((a % i == 0) && (b % i == 0))
        return i * lcm_calc(a / i, b / i, 2);  // divide, not modulo
    else if (a % i == 0)
        return i * lcm_calc(a / i, b, 2);
    else if (b % i == 0)
        return i * lcm_calc(a, b / i, 2);
    else
        return lcm_calc(a, b, ++i);
}

int main()
{
    int a, b, lcm = 0, i = 2;
    printf("Enter two numbers.\n");
    scanf("%d %d", &a, &b);

    if ((a > 0) && (b > 0))
    {
        lcm = lcm_calc(a, b, i);
    }

    printf("LCM = %d\n", lcm);
    return 0;
}
