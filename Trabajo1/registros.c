#include "registros.h"
#include "alu.h"
#include "InstruccionesDesplazamiento.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
/* La creación y el manejor total de los registros se da en esta función
por esto no es necesario un retorno o que reciba ningún parametro
se da un valor predeterminado a cada registro y se ofrecen las opciones de mostrar o modificar
al final del codigo el usuario puede elegir que tipo de operación realizar

*/
void Registros()
{

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
