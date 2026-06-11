#include <stdio.h>

int main()
{
    int i, j, a[20], n;
    int t;

    printf("Enter number of elements to be inputted in the array.\n");
    scanf("%d", &n);

    printf("Enter '%d' elements into an array.\n", n);
    for (i = 0; i < n; i++)
        scanf(" %d", &a[i]);

    // Sorting the Array
    for (i = 0; i < n - 1; i++)
    {
        t = a[i + 1];
        for (j = i; j >= 0; j--)
        {
            if (t < a[j])
                a[j + 1] = a[j];
            else
                break;
        }
        a[j + 1] = t;
    }

    printf("Duplicate Elements in the given array:\n");
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1]) // finds and prints duplicate elements
            printf("%d ", a[i]);

        // Prevents the printing of duplicate multiple times
        while (a[i] == a[i + 1])
            i++;
    }

    return 0;
}