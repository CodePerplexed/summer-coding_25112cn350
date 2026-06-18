#include <stdio.h>

static int a[20], b[20], na[20], nb[20], fa[20];

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

// Removes duplicates from array and storing them onto another array(which will only have unique element)
int remove_duplicates(int a[], int na[], int n)
{
    int i, j = 0;

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

    return j;
}

int main()
{
    int i, j, k = 0, pos = 0;
    int n, m;

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

    // Checks for any common elements within both arrays that consists of only unique element
    for (i = 0; i < remove_duplicates(a, na, n); i++)
    {
        for (j = 0; j < remove_duplicates(b, nb, m); j++)
        {
            if (na[i] == nb[j])
                fa[k++] = na[i];
        }
    }

    // Printing the array with intersection of the two arrays
    for (i = 0; i < k; i++)
        printf("%d ", fa[i]);

    return 0;
}