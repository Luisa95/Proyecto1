#include "alu.h"
#include "banderas.h"

void ALU (uint32_t Rd[], uint32_t Rm[], uint32_t Rn[])
{
uint32_t* puntero;
int op,i,j,l;
printf("ingrese la operación deseada \n Suma dos registros 1  Resta dos registros 2  \n Multiplica dos registros 3  Compuerta AND 4  \n Compuerta OR 5 Compuerta EXOR 6 \n Copiar le valor de un registro en otro 7 ");
scanf("%d",&op);
switch (op)
// uint32_t ADD(uint32_t Rd,uint32_t Rm, uint32_t Rn)
{
case 1:
{
    printf ("Suma el valor de Rd y Rm y lo guarda en Rn \n");
    Printf ("Ingresar el número del registro Rd \n ");
    scanf("%d",&i);
    Printf ("Ingresar el número del registro Rm \n");
    scanf("%d",&j);
    Printf ("Ingresar el número del registro Rn \n");
    scanf("%d",&l);
    Rn[l]=Rd[i]+Rm[j];//suma 2 registros
    // printf("Los valores sumados y el resultado son: %d + %d : %d \n",Rd[i], Rm[j], Rn[l]);
    banderas(Rn[i],Rd[i],Rm[i], puntero); // llama a las banderas
    break;
}
case 2:
//uint32_t SUB(uint32_t Rd,uint32_t Rm)
{
    printf ("Resta el valor de Rd y Rm y lo guarda en Rn \n");
    Printf ("Ingresar el número del registro Rd \n ");
    scanf("%d",&i);
    Printf ("Ingresar el número del registro Rm \n");
    scanf("%d",&j);
    Printf ("Ingresar el número del registro Rn \n");
    scanf("%d",&l);
    Rn[l]=Rd[i]-Rm[j];
    printf("Los valores restados y el resultado son: %d - %d : %d \n",Rd[i], Rm[j], Rn[l]);
    banderas(Rn[i],Rd[i],Rm[i], puntero);
    break;
}
case 3:

//uint32_t MUL (uint32_t Rd, uint32_t Rm)
{
    printf ("Multiplica el valor de Rd y Rm y lo guarda en Rn \n");
    Printf ("Ingresar el número del registro Rd \n ");
    scanf("%d",&i);
    Printf ("Ingresar el número del registro Rm \n");
    scanf("%d",&j);
    Printf ("Ingresar el número del registro Rn \n");
    scanf("%d",&l);
    Rn[l]=Rd[i]*Rm[j];
    printf("Los valores multiplicados y el resultado son: %d * %d : %d \n",Rd[i], Rm[j], Rn[l]);
    banderas(Rn[i],Rd[i],Rm[i], puntero);
    break;
}
case 4:

//uint32_t AND(uint32_t Rd,uint32_t Rm)
{
    printf ("Si los valores de Rd y Rm son iguales guarda un 1 en Rn, de lo contrario guarda un cero\n");
    Printf ("Ingresar el número del registro Rd \n ");
    scanf("%d",&i);
    Printf ("Ingresar el número del registro Rm \n");
    scanf("%d",&j);
    Printf ("Ingresar el número del registro Rn \n");
    scanf("%d",&l);
    Rn[l]=Rd[i]&Rm[j];//and entre los registros
    printf("Los valores operados y el resultado son: %d & %d : %d \n",Rd[i], Rm[j], Rn[l]);
    banderas(Rn[i],Rd[i],Rm[i], puntero);
    break;
}
case 5:

//uint32_t OR(uint32_t Rd,uint32_t Rm)
{
    printf ("Or entre el valor de Rd y Rm y lo guarda en Rn \n");
    Printf ("Ingresar el número del registro Rd \n ");
    scanf("%d",&i);
    Printf ("Ingresar el número del registro Rm \n");
    scanf("%d",&j);
    Printf ("Ingresar el número del registro Rn \n");
    scanf("%d",&l);
    Rn[l]=Rd[i]|Rm[j];//or entre los registros
    printf("Los valores operados y el resultado son: %d || %d : %d \n",Rd[i], Rm[j], Rn[l]);
    banderas(Rn[i],Rd[i],Rm[i], puntero);
    break;
}
case 6:

//uint32_t EOR(uint32_t Rd,uint32_t Rm)
{
    printf ("Exor entre el valor de Rd y Rm y lo guarda en Rn \n");
    Printf ("Ingresar el número del registro Rd \n ");
    scanf("%d",&i);
    Printf ("Ingresar el número del registro Rm \n");
    scanf("%d",&j);
    Printf ("Ingresar el número del registro Rn \n");
    scanf("%d",&l);
    Rn[l]=Rd[i]^Rm[j];//xor entre los registros
    printf("Los valores operados y el resultado son: %d || %d : %d \n",Rd[i], Rm[j], Rn[l]);
    banderas(Rn[i],Rd[i],Rm[i], puntero);
    break;
}
case 7:
//uint32_t MOV(uint32_t Rd,uint32_t Rm)
{
    printf (" copia el valor de Rm o Rn y lo guarda en Rd \n");
    Printf ("Ingresar el número del registro Rd \n ");
    scanf("%d",&i);
    printf (" copiar  Rm o Rn? 1 - 2\n");
    scanf("%d",&i);
    if (i==1)
    {
    Printf ("Ingresar el número del registro Rm \n");
    scanf("%d",&j);
    Rd[i]=Rm[j];
    printf("El valor copiado es el %d de el registro Rm[%d], al registro Rd[%d] \n",Rd[i], j, i);
    banderas(Rn[i],Rd[i],Rm[i], puntero);
    }
    else
    Printf ("Ingresar el número del registro Rn \n");
    scanf("%d",&l);
    Rd[i]=Rn[l];
    printf("El valor copiado es el %d de el registro Rn[%d], al registro Rd[%d] \n",Rd[i], l, i);
    banderas(Rn[i],Rd[i],Rm[i], puntero);
    break;
}

}
};
