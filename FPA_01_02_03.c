#include <stdio.h>
#include <stdlib.h>

void sanduhr(int breite) {
    int i, j, k;

    for (i = 0; i < breite / 2; i++) {

        for (j = 0; j < i; j++) {
            printf(" ");
        }

        for (k = 0; k < breite - 2 * i; k++) {
            printf("*");
        }
        printf("\n");
    }



    for (i = breite / 2; i >= 0; i--) {

        for (j = 0; j < i; j++) {
            printf(" ");
        }

        for (k = 0; k < breite - 2 * i; k++) {
            printf("*");
        }
        printf("\n");
    }

}

int main()
{
    int breite;

    printf("Geben Sie bitte die Breite ein: ");
    scanf("%d", &breite);
    sanduhr (breite);

    return 0;
}
