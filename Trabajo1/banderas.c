#include "banderas.h"
#include "registros.h"

int banderas(uint32_t Ra,uint32_t Rb, uint32_t Rc)
{
    /*Definir una estructura, declarar dentro un vector de banderas,
     retornar la estructura a los registros, estos la retornan al main y se imprime*/
    int zero, carry, over, neg;
    uint32_t numero = 4294967295; //2^32 bits -1 para el condicional
    if(Ra==0)
    {
        zero=1;

    }
    else
    {
        zero=0;
    }
/*
    if((1<<31)&Ra)
    {
        neg=1;
    }
    else
    {
        neg=0;
    }


    if(((Rb>numero)&&(Rc<numero)&&(Ra<=Rb))||((Rc>numero)&&(Rb<numero)&&(Ra<=Rc))||((Rb>numero)&&(Rc>numero)))
    {
        carry=1;
    }
    else
    {
       carry=0;
    }

    if(((Rb>numero)&&(Rc>numero)&&(Ra>numero)))
    {
        over=1;
    }
    else
    {
        over=0;
    }*/
return (zero);
}
