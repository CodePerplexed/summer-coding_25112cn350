#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void char_frequency(char st[100])
{
    int l, i, j, count;
    bool seen;
    l = strlen(st);

    printf("Modified string displaying character frequency = \n");
    for (i = 0; i < l; i++)
    {
        count = 0;
        seen = false;

        for (j = 0; j < i; j++)
            if (st[j] == st[i])
                seen = true;

        if (seen == false)
        {
            for (j = 0; j < l; j++)
                if (st[i] == st[j])
                    count++;

            printf("%c%d ", st[i], count);
        }
    }
}

int main()
{
    char st[100];
    int length;

    printf("Enter a string.\n");
    scanf("%[^\n]s", st);

    char_frequency(st);

    return 0;
}