#include <stdio.h>
#include <stdlib.h>



char abcFunc(char zeichen)
{
    if (zeichen == 'A')
    {
        return 'a';
    }
    if (zeichen == 'B')
    {
        return 'b';
    }
    if (zeichen == 'C')
    {
        return 'c';
    }
    else
    {
        return 'x';
    }
}


int main()
{
    system("chcp 1252");
    system("cls");

    char zeichen;

    printf("Geben Sie ein Zeichen ein: ");
    scanf(" %c", &zeichen);

    char result = abcFunc(zeichen);
    printf("Der Rückgabewert ist: %c\n", result);

    return 0;
}
