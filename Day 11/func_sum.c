#include <stdio.h>

// Finds the sum of two numbers
int sum(int a, int b)
{
    return (a + b);
}

int main()
{
    int a, b;

    printf("Enter two numbers to find their sum.\n");
    scanf("%d %d", &a, &b);

    printf("Sum = %d", sum(a, b));
    return 0;
}