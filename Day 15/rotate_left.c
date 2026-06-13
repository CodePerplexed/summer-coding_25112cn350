/* Example Run:
a[] = {1, 2, 3, 4, 5};

-> 1st trace: [2, 3, 4, 5, 1]
-> 2nd trace: [3, 4, 5, 1, 2]
*/

#include <stdio.h>

int main()
{
    int i, j, index, a[20], n;
    int temp;

    printf("Enter number of elements to be inputted in the array.\n");
    scanf("%d", &n);

    printf("Enter '%d' elements into an array.\n", n);
    for (i = 0; i < n; i++)
        scanf(" %d", &a[i]);

    printf("Enter the position to rotate the array elements to the left.\n");
    scanf("%d", &index);

    index = index % n;

    // Rotates the array to the left repeatedly
    for (i = 0; i <= index; i++)
    {
        temp = a[index - i]; // stores the value at the position

        // Shifting the array elements to the left of the position
        for (j = index - i; j < n - i; j++)
        {
            a[j] = a[j + 1];
        }

        a[j - 1] = temp; // swapping the value with position's value at the end of the shifted array
    }

    // Printing the left rotated array
    printf("\nLeft Rotated Array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}