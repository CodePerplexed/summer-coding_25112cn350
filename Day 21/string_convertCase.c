#include <stdio.h>
#include <string.h>

void convert_string(char *r, int l)
{
    int i;

    for (i = 0; i < l; i++)
    {
        if ((int)r[i] >= 97 && (int)r[i] <= 122)
            r[i] = r[i] - 32;
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

    convert_string((char *)st, length);
    printf("\nNew string = %s", st);

    return 0;
}