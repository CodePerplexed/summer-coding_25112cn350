#include <stdio.h>

int main()
{
    int i, index, a[20], n;
    int temp;

    printf("Enter number of elements to be inputted in the array.\n");
    scanf("%d", &n);

    printf("Enter '%d' elements into an array.\n", n);
    for (i = 0; i < n; i++)
        scanf(" %d", &a[i]);
    
    index = n - 1;

    for (i = n - 1; i >= 0; i--)
    {
        if(a[i] == 0)
        {
        temp = a[index];
        a[index] = a[i];
        a[i] = temp;
        index--;
        }
    }

    // Printing the array with all zeroes shifted to the right
    printf("\nRight Zeroed Array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}