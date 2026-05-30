#include <stdio.h>

int main()
{
    int n, rev = 0, i;

    printf("Enter a number.\n");
    scanf("%d", &n);

    // Reversing a number
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    printf("Reversed number = %d", rev);
    return 0;
}