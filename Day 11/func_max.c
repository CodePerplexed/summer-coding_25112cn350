#include <stdio.h>

// Finds the maximum of three numbers
int max(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
            return a;
        else
            return c;
    }
    else
    {
        if (b > c)
            return b;
        else
            return c;
    }
}

int main()
{
    int a, b, c;

    printf("Enter three numbers a, b and c respectively.\n");
    scanf("%d%d%d", &a, &b, &c);

    printf("The greatest number is %d.", max(a, b, c));
    return 0;
}