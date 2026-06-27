#include <stdio.h>
#include <string.h>

void count_words(char st[100])
{
    int i, count = 0, l;
    l = strlen(st);

    for (i = 0; i < l; i++)
    {
        if (st[i] == ' ' || st[i] == '.')
            count++;
    }

    printf("Number of words in the sentence = %d", count);
}

int main()
{
    char st[100];
    int length;

    printf("Enter a sentence.\n");
    scanf("%[^\n]s", st);

    count_words(st);

    return 0;
}