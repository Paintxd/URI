#include <stdio.h>
#include <stdlib.h>

void divisores(int numero, int cont)
{
    int x=0;
   if(numero >= cont)
   {
      if((numero % cont) == 0)
        x+=cont;
         printf("%d\n", cont);
      divisores(numero,cont + 1);
      return;
   }
   else
      return;
}

int main()
{
   int numero= 0;
   printf("Numero: ");
   scanf("%d", &numero);
   divisores(numero,1);
   return 0;
}
