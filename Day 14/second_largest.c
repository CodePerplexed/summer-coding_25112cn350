/* Example Run:
a[] = {10, 5, 20, 15};
l = 10 and sl = 10
-> 1st trace: l = 10, sl = 10
-> 2nd trace: l = 20, sl = 10 (sl = l = 10 & l = 20)
-> 3rd trace: l = 20, sl = 15 (by else if condition)
*/

#include <stdio.h>

int main()
{
    int n, a[10], i, j, sl, l;
    printf("Enter the number of elements in the array.\n");
    scanf("%d", &n);

    printf("Enter %d elements into the array.\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    l = a[0];
    sl = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > l) // Makes the element besides the largest one as second largest
        {
            sl = l;
            l = a[i];
        }
        else if (a[i] > sl && a[i] != l) // Finds the second largest element if there is no other largest match
        {
            sl = a[i];
        }
    }

    if (sl == l || n == 0)
        printf("No second largest element exists in the array.");
    else
        printf("The second largest element = %d", sl);

    return 0;
}