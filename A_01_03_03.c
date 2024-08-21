#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 1252");
    system("cls");

    char s1[101], s2[101], s3[101], s4[101], s5[101], s6[101];

    while(1) {

    printf("Geben Sie den ersten String des ersten Paares ein: \n");
    scanf(" %100[^\n´]", s1);

    printf("Geben Sie bitte den zweiten String des ersten Paares ein: \n");
    scanf(" %100[^\n]", s2);

    if (strcmp(s1, s2) != 0) {
        printf("Die Strings im ersten Paar sind nicht gleich, bitte erneut versuchen: \n");
        continue;
    }

    printf("Geben Sie den ersten String des zweiten Paares ein: \n");
    scanf(" %100[^\n´]", s3);

    printf("Geben Sie bitte den zweiten String des zweiten Paares ein: \n");
    scanf(" %100[^\n]", s4);

        if (strcmp(s3, s4) >= 0) {
        printf("Die Strings im zweiten Paar folgen nicht alphabetisch aufeinander, bitte erneut versuchen: \n");
        continue;
        }

    printf("Geben Sie den ersten String des des Paares ein: \n");
    scanf(" %100[^\n´]", s5);

    printf("Geben Sie bitte den zweiten String des dritten Paares ein: \n");
    scanf(" %100[^\n]", s6);

        if (strcmp(s5, s6) <= 0) {
        printf("Die Strings im dritten Paar folgen nicht umgekehrt alphabetisch aufeinander, bitte erneut versuchen: \n");
        continue;
        }

    printf("Alles O.K.\n");
    break;
    }

    printf("\n\n\n");

    return 0;
}
