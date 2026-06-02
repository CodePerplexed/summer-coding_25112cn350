#include <stdio.h>

int main()
{
    int n, c = 0;
    int choice;

    printf("Enter a number to count its set bits.\n");
    scanf("%d", &n);

    printf("Enter '1' if it's in decimal form and '2' if it's in binary form.\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        while (n != 0)
        {
            if (n & 1 == 1) // Checking if last bit is 1
                c++;
            n = n >> 1; // Deleting the last bit
        }
        printf("Number of set bits in the given number = %d", c);
        break;

    case 2:
        while (n != 0)
        {
            if (n % 10 == 1) // Checking if last bit is 1
                c++;
            n = n / 10;
        }
        printf("Number of set bits in the given number = %d", c);
        break;

    default:
        printf("Invalid choice.\n");
        break;
    }

    return 0;
}