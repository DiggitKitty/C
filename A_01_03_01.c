#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
    system("chcp 1252");
    system("cls");

    char s1[101], s2[101], s3[101];

    printf("Geben Sie bitte den ersten Satz ein(max 100 Zeichen): ");
    fflush(stdin);
    scanf("%[^\n]", &s1[0]);

    printf("Geben Sie bitte den zweiten Satz ein(max 100 Zeichen): ");
    fflush(stdin);
    scanf("%[^\n]", s2);

    if(strlen(s1) + strlen(s2) < 101)
    {
        strcpy(s3, s1);
        if(s3[strlen(s3-1)] !=' ')
        {
            strcat(s3, " ");
        }
        strcat(s3, s2);
        printf("s3: %s\n", s3);
    }
    else
    {
        printf("Text ist zu lang!\n");
    }

    printf("\n\n\n");


    return 0;
}
