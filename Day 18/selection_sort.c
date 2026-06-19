#include <stdio.h>

int main()
{
    int n, a[10], i, j, t, min;
    printf("Enter the number of elements in the array.\n");
    scanf("%d", &n);

    printf("Enter %d elements into the array.\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++)
    {
        min = i;

        // Finds the minimum element in the sub-array
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }

        // Moves the minimum element to the beginning of the sub-array
        t = a[i];
        a[i] = a[min];
        a[min] = t;
    }

    // Sample Array: 12, 11, 13, 5, 6, 8
    printf("\nSorted Array:\n%d", a[0]);
    for (i = 1; i < n; i++)
        printf(", %d", a[i]);

    return 0;
}