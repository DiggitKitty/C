#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("chcp 1252");
    system("cls");

    char text[11];
    char textGesamt[31] = "";
    int laengeGesamt = 0;

    while (laengeGesamt < 30)
    {
        printf("Geben Sie bitte einen String ein (es werden maximal 10 Zeichen eingelesen): ");
        scanf(" %10[^\n]", text);

        laengeGesamt = laengeGesamt + strlen(text);

        if (laengeGesamt > 30)
        {
            laengeGesamt = 30;
            break;
        }

        strncat(textGesamt, text, 30 - strlen(textGesamt));
        printf("Aktueller Inhalt von textGesamt: %s\n", textGesamt);
    }

    printf("Die Eingabeschleife endet, weil das array 'textGesamt' maximal 30 Zeichen abspeichern kann.\n");

    return 0;
}
