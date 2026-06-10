#include <stdio.h>

int main()
{
    int a[10], n, i;

    printf("Enter the size of array.\n");
    scanf("%d", &n);

    printf("Enter %d elements into an array.\n", n);
    for (i = 0; i < n; i++)
    {
        scanf(" %d", &a[i]);
    }

    printf("Array elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}