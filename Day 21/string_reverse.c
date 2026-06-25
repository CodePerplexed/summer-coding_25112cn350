#include <stdio.h>
#include <string.h>

void reverse_string(char *r, int l)
{
    int i;
    char temp;

    for (i = 0; i < l / 2; i++)
    {
        temp = *(r + i);
        *(r + i) = *(r + l - 1 - i);
        *(r + l - 1 - i) = temp;
    }

    return;
}

int main()
{
    char st[100];
    int length;

    printf("Enter a word.\n");
    fgets(st, 100, stdin);

    length = strlen(st);

    // Prevents out of bonds condition in case of empty string
    if (length > 0 && st[length - 1] == '\n')
        st[length - 1] = '\0';

    length = strlen(st);

    reverse_string((char *)st, length);
    printf("\nReversed string = %s", st);

    return 0;
}