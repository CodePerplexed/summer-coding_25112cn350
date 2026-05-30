#include <stdio.h>

int main()
{
    int n, n1, rev = 0, i;

    printf("Enter a number.\n");
    scanf("%d", &n);

    n1 = n; // Creating a copy of the original number

    // Reversing a number
    while (n1 != 0)
    {
        rev = rev * 10 + n1 % 10;
        n1 = n1 / 10;
    }

    if (rev == n)
        printf("\nPalindrome.");
    else
        printf("\nNot Palindrome.");

    return 0;
}