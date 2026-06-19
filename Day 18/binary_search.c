#include <stdio.h>

int main()
{
    int n, a[10], i;
    int l = 0, h, mid, pos = -1, s;
    printf("Enter the number of elements in the array.\n");
    scanf("%d", &n);

    printf("Enter %d elements into the array.\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the element to be searched.\n");
    scanf("%d", &s);

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

    if (pos == -1)
        printf("Element not found.");
    else
        printf("Element found at %dth index of the array.", pos);
}