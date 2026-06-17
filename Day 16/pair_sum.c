#include <stdio.h>
#include <stdbool.h>

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

int search(int a[], int s, int n)
{
    int l = 0, h, mid, pos = -1;

    h = n - 1;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (s > a[mid])
            l = mid + 1;
        else if (s < a[mid])
            h = mid - 1;
        else
        {
            pos = mid;
            break;
        }
    }

    return pos;
}

int main()
{
    int i, j, n;
    int sum;

    printf("Enter number of elements to be inputted in the array.\n");
    scanf("%d", &n);

    printf("Enter '%d' elements into an array.\n", n);
    for (i = 0; i < n; i++)
        scanf(" %d", &a[i]);

    printf("Enter the required sum to check if a pair exists for the given sum.\n");
    scanf("%d", &sum);

    // Sorting the Array by QuickSort
    quicksort(a, 0, n - 1);

    // Finding each pair that equals to the sum
    for (i = 0; i < n; i++)
    {
        // Searching if the complement pair of an element exists in the array
        if (search(a, (sum - a[i]), n) != -1)
        {
            printf("(%d, %d) ", a[i], a[search(a, (sum - a[i]), n)]);
        }
    }

    return 0;
}