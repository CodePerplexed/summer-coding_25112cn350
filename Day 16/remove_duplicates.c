#include <stdio.h>

static int a[20];

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
    temp = pivot;
    a[pivotPos] = a[index];
    a[index] = pivot;

    // Recursively call function for each partition until array is sorted
    quicksort(a, low, index - 1);
    quicksort(a, index + 1, high);
}

int main()
{
    int i, j = 0, n;
    int na[20];

    printf("Enter number of elements to be inputted in the array.\n");
    scanf("%d", &n);

    printf("Enter '%d' elements into an array.\n", n);
    for (i = 0; i < n; i++)
        scanf(" %d", &a[i]);

    // Sorting the Array by QuickSort
    quicksort(a, 0, n - 1);

    // Removing duplicates from the array
    for (i = 0; i < n - 1; i++)
    {
        na[j++] = a[i]; // Storing each element into a new array avoiding its duplicates
        while (a[i] == a[i + 1])
            i++;
    }

    // Checking for last element
    if (a[i] != a[i - 1])
        na[j++] = a[i];

    // Printing the array with only unique elements
    for (i = 0; i < j; i++)
        printf("%d ", na[i]);

    return 0;
}