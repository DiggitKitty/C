#include <stdio.h>
#include <stdlib.h>


dreieck(int breite)
{
    for (int i = 1; i <= breite; i++)
        {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int breite;
    printf("Geben Sie die Breite des Dreiecks ein: ");
    scanf("%d", &breite);
    fflush(stdin);
    dreieck(breite);

    return 0;
}
