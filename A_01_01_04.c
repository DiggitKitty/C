#include <stdio.h>
#include <stdlib.h>

void printMonat(int monat)
{
    switch (monat)
    {
        case 1: printf("Januar\n"); break;
        case 2: printf("Februar\n"); break;
        case 3: printf("März\n"); break;
        case 4: printf("April\n"); break;
        case 5: printf("Mai\n"); break;
        case 6: printf("Juni\n"); break;
        case 7: printf("Juli\n"); break;
        case 8: printf("August\n"); break;
        case 9: printf("September\n"); break;
        case 10: printf("Oktober\n"); break;
        case 11: printf("November\n"); break;
        case 12: printf("Dezember\n"); break;
        default: printf("Ungültiger Monat\n"); break;
    }
}

int main()
{
    int x;
    char antwort;


    printf("Geben Sie eine ganze Zahl ein: ");
    scanf("%d", &x);


    if (x >= 1 && x <= 12)
        {
        printMonat(x);
    } else {

        printf("Sind Sie ein Modulo-Fan? (j/n): ");
        scanf(" %c", &antwort);

        if (antwort == 'j')
            {

            x = x % 12;
            if (x <= 0) {
                x += 12;
            }
            printMonat(x);
        } else {
            printf("Dann eben nicht\n");
        }
    }

    return 0;
}
