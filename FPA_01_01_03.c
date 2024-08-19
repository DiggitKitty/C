#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[3];
    int brr[3];

    srand(time(NULL));
    rand();

    for (int i = 0; i < 3; i++)
    {
        arr[i] = rand() %10;
        brr[i] = rand() %10;
    }

     printf("arr: %d%d%d\n", arr[0], arr[1], arr[2]);
     printf("brr: %d%d%d\n", brr[0], brr[1], brr[2]);


    if (arr[0] != brr[0])
    {
        printf("Die beiden 3-stelligen Zahlen unterscheiden sich bereits in der ersten Ziffer\n");
    }
    if (arr[1] != brr[1])
    {
        printf("Die beiden 3-stelligen Zahlen unterscheiden sich zuerst in der zweiten Ziffer\n");
    }
    if (arr[2] != brr[2])
    {
        printf("Die beiden 3-stelligen Zahlen unterscheiden sich erst in der letzten Ziffer\n");
    }
    else {
        printf("Die beiden 3-stelligen Zahlen sind identisch\n");
    }

    return 0;
}
