#include <stdio.h>
#include <stdbool.h>

// Finds if a number is palindrome
bool palindrome(int n)
{
    int n1, rev = 0;

    n1 = n; // Creating a copy of the original number

    // Reversing a number
    while (n1 != 0)
    {
        rev = rev * 10 + n1 % 10;
        n1 = n1 / 10;
    }

    if (rev == n)
        return true;
    else
        return false;
}

int main()
{
    int n;

    printf("Enter a number.\n");
    scanf("%d", &n);

    if (palindrome(n) == true)
        printf("%d is a Palindrome number.", n);
    else
        printf("%d is not a Palindrome number.", n);

    return 0;
}