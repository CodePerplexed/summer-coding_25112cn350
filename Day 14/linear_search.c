#include <stdio.h>

int main()
{
    int i, a[10], n;
    int pos = -1, s;

    printf("Enter number of elements to be inputted in the array.\n");
    scanf("%d", &n);

    printf("Enter '%d' elements into an array.\n", n);
    for (i = 0; i < n; i++)
        scanf(" %d", &a[i]);

    printf("Enter the element to be searched.\n");
    scanf("%d", &s);

    // Finds the element to be searched within the array
    for (i = 0; i < n; i++)
    {
        if (a[i] == s)
        {
            pos = i;
            break;
        }
    }

    if (pos >= 0)
        printf("Element was found at %d position in the array.", (pos + 1));
    else
        printf("Element was not found in the array.");

    return 0;
}