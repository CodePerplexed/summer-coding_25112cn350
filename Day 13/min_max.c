#include <stdio.h>

int main()
{
    int i, a[10], n, max, min;

    printf("Enter number of elements to be inputted in the array.\n");
    scanf("%d", &n);

    printf("Enter '%d' elements into an array.\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = a[0];
    min = a[0];

    // Finds Max and Min of all Array Elements
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
        if (min > a[i])
            min = a[i];
    }

    printf("Largest Element = %d", max);
    printf("\nSmallest Element = %d", min);

    return 0;
}