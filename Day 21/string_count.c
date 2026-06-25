#include <stdio.h>
#include <string.h>

void count_vowels_and_consonants(char st[100], int l)
{
    int i;
    int vowels = 0, consonants = 0;
    for (i = 0; i < l; i++)
    {
        if ((st[i] >= 65 && st[i] <= 90) || (st[i] >= 97 && st[i] <= 122))
        {
            if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u' || st[i] == 'A' || st[i] == 'E' || st[i] == 'I' || st[i] == 'O' || st[i] == 'U')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d", consonants);
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

    count_vowels_and_consonants(st, length);

    return 0;
}