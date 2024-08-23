#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int hashf(int z[], int anzahl)
{
    int summe = 0;


    for (int i = 0; i < anzahl; i++)
    {
        summe = summe + z[i];
    }
    return summe % 10;
}

int liesZiffer(char Text[], int min, int max)
{
  int ok = 0;
  int eingabe;
  do
  {

      printf("%s\n", Text);
      scanf("%d", &eingabe);
      fflush(stdin);
      if (eingabe >= min &&eingabe <= max)
      {
          ok = 1;
        }
        else
        {
            printf("Fehlerhafte Eingabe\n");
        }
  }
        while (ok == 0);
        return eingabe;
}

int main()
{
    int ziffern[10];
    int kontrollziffer;
    int hashwert;
    char eingabe;
    char Text[100];

    for (int i = 0; i < 10; i++)
    {
        sprintf(Text, "Gib %d. Ziffer ein:", i+1);
        ziffern[i] = liesZiffer (Text, 0, 9);
    }
    kontrollziffer = liesZiffer("Gib Kontrollziffer: ", 0,9);

        hashwert = hashf (ziffern, 10);

        printf("Hashwert: %d, Kontrollziffer: %d\n", hashwert, kontrollziffer);

        if (hashwert == kontrollziffer)
        {
            printf("Fehlerhafte eingabe!\n");
        }

    return 0;
}
