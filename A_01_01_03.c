#include <stdio.h>
#include <stdlib.h>

int main()
{
   int prozentsatz;

   printf("Bitte geben Sie den Prozentsatz ein: ");
   scanf("%d", &prozentsatz);
   fflush(stdin);

   if (prozentsatz >=92 && prozentsatz <=100)
   {
      printf("sehr gut\n");
   }
   else if(prozentsatz >=81 && prozentsatz <=91)
   {
       printf("gut\n");
   }
   else if(prozentsatz >=67 && prozentsatz <=80 )
   {
     printf("befriedigend\n");
   }
   else if(prozentsatz >=50 && prozentsatz <=66)
   {
       printf("ausreichend\n");
   }
   else if(prozentsatz >=30 && prozentsatz <=49)
   {
       printf("mangelhaft\n");
   }
   else if(prozentsatz >=0 && prozentsatz <=29)
   {
       printf("ungenügend\n");
   }
   else
   {
       printf("Ungültige Eingabe\n");
   }

    return 0;
}


