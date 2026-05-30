#include <stdio.h>

int main()
{
    int N, i;

    printf("Enter the number to print it's multiplication table.\n");
    scanf("%d", &N);

    printf("Multiplication table of %d:\n\n", N);
    // Printing the multiplication table of a number upto it's ×10
    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d", N, i, N * i);
        printf("\n");
    }

    return 0;
}