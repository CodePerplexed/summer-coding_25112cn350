#include <stdio.h>
#include <string.h>

void string_length(char st[100])
{
    int l = 0;

    while (st[l] != '\0')
    {
        l++;
    }

    printf("Length of string = %d", l);
    return;
}

int main()
{
    char st[100];
    int length;

    printf("Enter a word.\n");
    scanf("%[^\n]s", st);

    string_length(st);

    return 0;
}