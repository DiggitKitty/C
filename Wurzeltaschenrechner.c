#include <stdio.h>
#include <math.h>

int main() 
{
    double number, result;

    printf("Geben Sie eine Zahl ein: ");
    scanf(" %lf", &number);

    if (number < 0) 
    {
        printf("Fehler: Die Quadratwurzel einer negativen Zahl ist nicht definiert.\n");
    } 
    else 
    {
        result = sqrt(number);
        printf("Die Quadratwurzel von %.2f ist %.2f\n", number, result);
    }

    return 0;
}