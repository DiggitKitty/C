#include <stdio.h>
#include <stdlib.h>

int main()
{
    char z1, z2;


    printf("Geben Sie das erste Zeichen ein: ");
    scanf(" %c", &z1);
    fflush(stdin);
    printf("Geben Sie das zweite Zeichen ein: ");
    scanf(" %c", &z2);
    fflush(stdin);


    if (z1 == 'Q' && z2 != 'Q')
        {
        printf("Fall 1\n");
    }
    else if (z1 != 'Q' && z2 == 'Q')
    {
        printf("Fall 2\n");
    }
    else {
        printf("Fall 3\n");
    }

    return 0;
}


