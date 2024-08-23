#include <stdio.h>
#include <stdlib.h>

int global = 1;

erhoeheUmx(x)
{
    global = global + x;
}
output()
{
    printf("global: %d\n", global);
}

int main()
{
    int x = 0;
    printf("Gib x ein: ");
    fflush(stdin);
    scanf("%d", &x);

    erhoeheUmx(x);

    output();

    return 0;
}
