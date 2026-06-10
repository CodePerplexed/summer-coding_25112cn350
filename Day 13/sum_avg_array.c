#include <stdio.h>

int main()
{
    int a[10], n, i;
    int sum;
    double avg;

    printf("Enter the size of array.\n");
    scanf("%d", &n);

    printf("Enter %d elements into an array.\n", n);
    for (i = 0; i < n; i++)
    {
        scanf(" %d", &a[i]);
    }

    for (i = 0; i < n; i++)
        sum = sum + a[i];

    avg = (double)sum / n;

    printf("Sum of elements = %d", sum);
    printf("\nAverage of elements = %.2lf", avg);

    return 0;
}