/* Example Run:
a[] = {1, 2, 3, 4, 5};

-> 1st trace: [4, 1, 2, 3, 5]
-> 2nd trace: [4, 5, 1, 2, 3]
*/

#include <stdio.h>

int main()
{
    int i, j, k = 0, index, a[20], n;
    int temp;

    printf("Enter number of elements to be inputted in the array.\n");
    scanf("%d", &n);

    printf("Enter '%d' elements into an array.\n", n);
    for (i = 0; i < n; i++)
        scanf(" %d", &a[i]);

    printf("Enter the position to rotate the array elements to the right.\n");
    scanf("%d", &index);

    index = index % n;

    // Rotates the array to the right repeatedly
    for (i = index; i >= 0; i--)
    {
        temp = a[n - 1 - i]; // stores the value at the position to be rotated

        // Shifting the array elements to the right
        for (j = n - 1 - i; j >= k; j--)
        {
            a[j] = a[j - 1];
        }

        a[k] = temp; // swapping the value of element to the left of the shifted array with the value at the position
        k++;
    }

    // Printing the right rotated array
    printf("\nRight Rotated Array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}