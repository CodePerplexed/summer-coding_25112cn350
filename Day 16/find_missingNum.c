#include <stdio.h>

int main()
{
    int i, sum = 0, a[20], n;

    printf("Enter number of elements to be inputted in the array.\n");
    scanf("%d", &n);

    printf("Enter '%d' elements into an array.\n", n);
    for (i = 0; i < n; i++)
        scanf(" %d", &a[i]);
    
    // Finds the sum of all elements of the array
    for (i = 0; i < n; i++)
        sum = sum + a[i];

    // Finds the missing number by subtracting the sum from the total sum of series of range 'n'
    printf("Missing Number = %d", (n * (n + 1) / 2 - sum));

    return 0;
}