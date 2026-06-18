#include <stdio.h>

static int a[40], b[20];

// Merging the two arrays
void merge(int a[], int n, int b[], int m)
{
    int i;
    for (i = n; i < (n + m); i++)
        a[i] = b[i - n];

    return;
}

// Lomuto-style partition scheme
void quicksort(int a[], int low, int high)
{
    if (low >= high) // checks if the subarray is sorted
        return;

    int pivot, index, temp, i, pivotPos;
    pivotPos = high;
    pivot = a[high];
    index = high;

    // Moves every element greater than the pivot to the end of the subarray
    for (i = high - 1; i >= low; i--)
    {
        if (a[i] > pivot)
        {
            if (index == pivotPos)
                pivotPos = i;
            temp = a[index];
            a[index] = a[i];
            a[i] = temp;
            index--;
        }
    }

    // Placing pivot at correct position
    a[pivotPos] = a[index];
    a[index] = pivot;

    // Recursively call function for each partition until array is sorted
    quicksort(a, low, index - 1);
    quicksort(a, index + 1, high);
}

int main()
{
    int i, j = 0, n, m;
    int na[40];

    printf("Enter number of elements to be inputted in the first array.\n");
    scanf("%d", &n);

    printf("Enter '%d' elements into the array.\n", n);
    for (i = 0; i < n; i++)
        scanf(" %d", &a[i]);

    printf("Enter number of elements to be inputted in the second array.\n");
    scanf("%d", &m);

    printf("Enter '%d' elements into the array.\n", m);
    for (i = 0; i < m; i++)
        scanf(" %d", &b[i]);

    merge(a, n, b, m);

    // Sorting the Array by QuickSort
    quicksort(a, 0, n + m - 1);

    // Removing duplicates from the array to keep only distinct elements
    for (i = 0; i < (n + m) - 1; i++)
    {
        na[j++] = a[i]; // Storing each element into a new array avoiding its duplicates
        while (a[i] == a[i + 1])
            i++;
    }

    // Checking for last element
    if (a[i] != a[i - 1])
        na[j++] = a[i];

    // Printing the union of both arrays
    for (i = 0; i < j; i++)
        printf("%d ", na[i]);

    return 0;
}