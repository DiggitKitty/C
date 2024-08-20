#include <stdio.h>
#include <stdlib.h>

abwaertsAufwaerts(int breite)
{
    for (int i = breite; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= breite; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int breite;
    printf("Geben sie die Breite der Dreiecke ein: ");
    scanf("%d", &breite);
    fflush(stdin);
    abwaertsAufwaerts(breite);

    return 0;
}
