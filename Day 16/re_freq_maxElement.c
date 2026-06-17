#include <stdio.h>
#include <stdlib.h>

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
    int i, n, f = 0, op, sum = 0;

    printf("Enter number of elements to be inputted in the array.\n");
    scanf("%d", &n);

    printf("Enter '%d' elements into an array.\n", n);
    for (i = 0; i < n; i++)
        scanf(" %d", &a[i]);

    // Sorting the array by quicksort
    quicksort(a, 0, n - 1);

    printf("Enter the maximum number of operations that can be performed.\n");
    scanf("%d", &op);

    // Finds the maximum possible frequency of an element using a set number of operations
    for (i = 0; i <= n; i++)
    {
        sum = sum + a[i];

        // Checks if the total number of operations are enough for changing the prior elements into the current array element
        if (abs(a[i] * (i + 1) - sum) <= op)
            f++;
        else
            break;
    }

    printf("Maximum possible frequency = %d", f);

    return 0;
}