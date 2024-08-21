#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("chcp 1252");
    system("cls");

    char text[101];
    int i;
    int haeufigkeit[256] = {0};
    int maxHaeufigkeit = 0;
    char haeufigstesZeichen;

    printf("Geben Sie bitte einen Text ein: ");
    scanf(" %100[^\n]", text);
    printf("\nKontrollausgabe: %s\n", text);

    for (i = 0; i < strlen(text); i++)
    {
        unsigned char zeichen = (unsigned char)text[i];
        haeufigkeit[zeichen]++;

        if (haeufigkeit[zeichen] > maxHaeufigkeit)
        {
            maxHaeufigkeit = haeufigkeit[zeichen];
            haeufigstesZeichen = text[i];
        }
    }

    printf("\n\nAm häufigsten kommt %c (nämlich %d-mal) vor.\n", haeufigstesZeichen, maxHaeufigkeit);

    return 0;
}
