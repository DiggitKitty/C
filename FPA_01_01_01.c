#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j;

    printf("Geben Sie eine Jahreszahl ein: ");
    scanf("%d", &j);
    fflush(stdin);

    if (j %4 == 0)
    {
        printf("%d ist ein Schaltjahr.\n", &j);
    }
    if (j %400 == 0)
    {
    printf("%d ist ein Schaltjahr.\n", &j);
    }
    if (j %100 == 0)
    {
        printf("%d ist kein Schaltjahr.\n", &j);
    }
    else {
        printf("%d ist kein Schlatjahr.\n", &j);
    }

    return 0;
}
