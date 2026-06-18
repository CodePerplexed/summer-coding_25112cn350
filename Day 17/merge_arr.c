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

int main()
{
    int i, n, m;

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

    // Printing the merged array
    for (i = 0; i < (m + n); i++)
        printf("%d ", a[i]);

    return 0;
}