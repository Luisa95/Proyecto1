#include "registros.h"
#include <stdint.h>
#include <stdlib.h>

void Registros(uint32_t Rd[], uint32_t Rm[], uint32_t Rr[])
{
   int i;
   printf("Los Registros actualmente tienen los valores: \n");

         for(i=0;i<12;i++)
         {
           printf ("\n Rd[i] %d",Rd[i]);
           printf ("\n Rm[i] %d",Rm[i]);
           printf ("\n Rr[i] %d",Rr[i]);
         };

}
/*
uint32_t Rd[12],Rm[12],Rn[12];
int caso,i,j,l,op,caso2;
for (i=0;i<12;i=+1)
{
   Rd[i]=Rm[i]=Rn[i]=i;
   printf(" el cortex MO consta de 2 arreglos de 12 registros de 32 bits c/u \n Los registros tienen guardado el valor de su posición dentro del vector \n %d %d", Rd[i], Rm[i]);
}
   printf("Para modificar el valor de los registros 0 \n realizar operaciones de desplazamiento 1 \n realizar operaciones aritmeticas 2 \n");
   scanf("%d",&caso);

switch (caso)
{

case 0:

 {
   switch (caso2)
    {
      printf("Para modificar Rd- 1 \n  Para modificar Rm- 2 \n  Para modificar Rn- 3 \n");
      scanf("%d",caso2);
      case 1:
       {
         for(i=0;i<12;i++)
         {
           printf ("Ingresar el valor de Rd[i]");
           scanf("%d",Rd[i]);
         }
         break;
        }
       case 2:
        {
          for(j=0;j<12;j++)
          {
           printf ("Ingresar el valor de Rm[j]");
           scanf("%d",Rm[j]);
          }
          break;
         }

        case 3:
         {
          for(l=0;l<12;l++)
          {
           printf ("Ingresar el valor de Rn[l]");
           scanf("%d",Rn[l]);
          }
           break;
         }


   }
    break;
 }

case 1:
  {
    desplazamiento(Rd,Rm,Rn);
    break;
  }
case 2:
  {
    ALU(Rd,Rm,Rn);
    break;
  }
}
}
*/
