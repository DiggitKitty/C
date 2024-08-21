#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    system("chcp 1252");
    system("cls");

    char text[101];
    int i;
    int doppel[256]={0};

    printf("Geben Sie bitte einen Text ein: ");
    scanf(" %100[^\n]", text);
    printf("\nKontrollausgabe: %s\n", text);

    for(i = 0; i < strlen(text); i++)
        {
            unsigned char zeichen = (unsigned char)text[i];
            if(doppel[zeichen]== 0)
            {
                printf("\n%c ASCII-WERT: %d", text[i], (text[i]+256)%256);
                doppel[zeichen]=1;
            }
            else
            {
                printf("\n%c kam bereits vor.", text[i]);
            }
        }

    return 0;
}


