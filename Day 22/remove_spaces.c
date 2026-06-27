#include <stdio.h>
#include <string.h>

void remove_spaces(char* st, int l)
{
    int i = -1, j = 0;

    while(st[i] != '\0')
    {
        i++;
        if (st[i] == ' ')
        {
            j++;
            continue;
        }
        st[i - j] = st[i];
    }
    return;
}

int main()
{
    char st[100];
    int length;

    printf("Enter a sentence.\n");
    scanf("%[^\n]s", st);

    length = strlen(st);

    remove_spaces((char*)st, length);

    printf("\nModified string = %s", st);

    return 0;
}