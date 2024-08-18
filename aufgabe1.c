#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 1252");
	system("cls");

	int z1, quersumme, again, z2;

	do
    {
        printf("\n--------------------------------------\n");
        printf("Zahl eingeben: ");
        scanf("%d", &z1);
        fflush(stdin);
        quersumme = 0;

        do
        {
            z2 = z1 % 10;
            quersumme = quersumme + z2;
            z1 = z2 / 10;
        }while(z1 > 0);

        printf("\nQuersumme ist: %d", quersumme);
        printf("\n--------------------------------------");

        printf("\n\nNeue Zahl = 1 ODER Abbrechen = 0\n");
        scanf("%d", &again);
        fflush(stdin);

    }while(again == 1);

    printf("\n\n");


    return 0;
}
