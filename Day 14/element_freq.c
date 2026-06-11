#include <stdio.h>

int main()
{
    int i, a[10], n;
    int f = 0, s;

    printf("Enter number of elements to be inputted in the array.\n");
    scanf("%d", &n);

    printf("Enter '%d' elements into an array.\n", n);
    for (i = 0; i < n; i++)
        scanf(" %d", &a[i]);

    printf("Enter the element whose frequency is to be calculated.\n");
    scanf("%d", &s);

    // Finds the frequency of the element
    for (i = 0; i < n; i++)
    {
        if (a[i] == s)
            f++;
    }

    printf("Frequency of '%d' in the array = %d", s, f);

    return 0;
}