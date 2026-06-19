#include <stdio.h>
int main()
{
    int n, a[10], i, j, t;
    printf("Enter the number of elements in the array.\n");
    scanf("%d", &n);

    printf("Enter %d elements into the array.\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++)
    {
        // Each pass bubbles the largest element to the end
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                // Swap adjacent elements if out of order
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    // Sample Array: 12, 11, 13, 5, 6, 8
    printf("\nSorted Array:\n%d", a[0]);
    for (i = 1; i < n; i++)
        printf(", %d", a[i]);

    return 0;
}