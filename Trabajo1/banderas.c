#include "banderas.h"
#include "registros.h"
void banderas(uint32_t Rd,uint32_t Rm, uint32_t Rr)
{
    bool zero, carry, over, neg;
    uint32_t numero = 4294967296; //2^32 bits -1 para el condicional

    if(Rd==0)
    {
        zero=1;

    }
    else
    {
        zero=0;
    }

    if((1<<31)&Rd)
    {
        neg=1;
    }
    else
    {
        neg=0;
    }


    if(((Rm>numero)&&(Rr<numero)&&(Rd<numero))||((Rr>numero)&&(Rm<numero)&&(Rd<numero))||((Rm>numero)&&(Rr>numero)))
    {
        carry=1;
    }
    else
    {
       carry=0;
    }

/*
    if(((Rn>numero)&&(Rr>numero)&&(Rd<=numero))||((Rn<=numero)&&(Rr<=numero)&&(Rd>numero)))
    {
        puntero->sobreflujo=1;
    }
    else
    {
        puntero->sobreflujo=0;
    }

*/
}

