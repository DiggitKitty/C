#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int zahlen[10];
    int hashwert;

    printf("Bitte geben Sie 10 einstellige Zahlen ein:\n");
    for(int i = 0; i < 10; i++) {
        printf("Zahl %d: ", i + 1);
        scanf("%d", &zahlen[i]);
    }

    hashwert = zahlen[0];

    for(int i = 1; i < 10; i++) {
        hashwert = (hashwert * zahlen[i]) % 10;
    }

    printf("Der Hashwert ist: %d\n", hashwert);

    return 0;
}
