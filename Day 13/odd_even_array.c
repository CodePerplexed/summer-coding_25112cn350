#include <stdio.h>

int main()
{
    int i, a[10], n, odd_sum = 0, even_sum = 0;

    printf("Enter number of elements to be inputted in the array.\n");
    scanf("%d", &n);

    printf("Enter '%d' elements into an array.\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Finds the Sum of Even and Odd Array Elements
    for (i = 0; i < n; i++)
    {
        if ((a[i] & 1) == 0)
            even_sum += a[i];
        else
            odd_sum += a[i];
    }

    printf("Sum of odd numbers = %d", odd_sum);
    printf("\nSum of even numbers = %d", even_sum);
    
    return 0;
}