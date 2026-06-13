#include <stdio.h>

int main()
{
    int i, a[10], n;
    int temp;

    printf("Enter number of elements to be inputted in the array.\n");
    scanf("%d", &n);

    printf("Enter '%d' elements into an array.\n", n);
    for (i = 0; i < n; i++)
        scanf(" %d", &a[i]);

    //  Reversing the array by switching concurrent elements going from first and last to the middle array index
    for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    // Printing the reversed array
    printf("\nReversed Array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}