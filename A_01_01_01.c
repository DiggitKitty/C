#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
    system("chcp 1252");
    system("cls");

    srand(time (NULL));
    rand();

    int x;

    for (int i=1;i<10;i++)
    {
    x = rand() % 6 + 1;
    printf("W�rfelergebnis: %d\n", x);

    if (x > 3)
    {
        printf("�berdurchschnittlich!\n");
    }
    else
    {
        switch(x)
        {
            case 1: printf("Oh Mann!\n"); break;
            case 2: printf("Naja!\n"); break;
            case 3: printf("O.K.!\n"); break;

            default: printf("H�h!\n");
        }
    }
}

    return 0;
}
