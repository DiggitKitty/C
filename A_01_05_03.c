#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int x;

void zufall(void)
{
    x = (rand() % 10) + 1;
}

int main(void)
{
    srand(time(NULL));

    for(int i = 0; i < 5; i++)
        {
        zufall();
        printf("Wert von x: %d\n", x);
        }

    return 0;
}
