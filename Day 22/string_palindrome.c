#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool palindrome(char st[100])
{
    int l, i;

    l = strlen(st);
    
    for (i = 0; i < l / 2; i++)
    {
        if (st[i] != st[l - 1 - i])
            return false;
    }

    return true;
}

int main()
{
    char st[100];

    printf("Enter a string.\n");
    scanf("%[^\n]s", st);

    if (palindrome(st) == true)
        printf("%s is a palindrome string.", st);
    else
        printf("%s is not a palindrome string.", st);
        
    return 0;
}