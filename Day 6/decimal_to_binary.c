#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, i = 0;
    char b = '\0';
    char str[100];
    char t;

    printf("Enter a number in decimal form.\n");
    scanf("%d", &n);

    while (n != 0)
    {
        b = '0' + n % 2; // Finding the last binary digit
        str[i++] = b;    // Adding the last digit into a character array
        n = n / 2;
    }
    str[i] = '\0'; // Marking the end of string

    // Reversing the string to form the actual binary value
    for (i = 0; i < strlen(str) / 2; i++)
    {
        t = str[i];
        str[i] = str[strlen(str) - 1 - i];
        str[strlen(str) - 1 - i] = t;
    }

    printf("Binary of the number = %s", str);
    return 0;
}