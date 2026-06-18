#include <stdio.h>

static int a[20], b[20], c[20];

// Stores common element of both arrays into a new one
int common(int a[], int n, int b[], int m)
{
    int i, j, pos = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                c[pos++] = a[i];
            }
        }
    }
    return pos;
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

    // Printing the array consisting of only common elements of both arrays
    for (i = 0; i < common(a, n, b, m); i++)
        printf("%d ", c[i]);

    return 0;
}