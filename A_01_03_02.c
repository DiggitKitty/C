#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main() {
    system("chcp 1252");
    system("cls");

    char word[21]; // Platz für 20 Zeichen + Nullterminator

    while (1) {
        printf("Bitte geben Sie ein Wort ein (maximal 20 Zeichen): ");
        // Eingabepuffer leeren
        while (getchar() != '\n');
        scanf("%20s", word); // Begrenzung auf 20 Zeichen

        int length = strlen(word);
        if (length == 0) {
            continue; // Falls kein Wort eingegeben wurde, erneut abfragen
        }

        // Ersten und letzten Buchstaben extrahieren
        char firstChar = word[0];
        char lastChar = word[length - 1];

        // Vergleich unter Berücksichtigung der ASCII-Werte
        if (firstChar == lastChar ||
            firstChar + 32 == lastChar ||
            firstChar == lastChar + 32) {
            printf("wunderbar!\n");
            break;
        } else {
            printf("Die Buchstaben sind nicht gleich. Bitte versuchen Sie es erneut.\n");
        }
    }

    printf("\n\n\n");

    return 0;
}
