#include "banderas.h"
#include "registros.h"
void banderas(uint32_t Rd,uint32_t Rm, uint32_t Rr)
{
    bool zero, carry, over, neg;
    uint32_t numero = 4294967295; //2^32 bits -1 para el condicional
    //uint64_t fludge1,fludge2;
    //fludge2=Rm*Rr;
   // fludge1=Rm+Rr;
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


    if(((Rm>numero)&&(Rr<numero)&&(Rd<=Rm))||((Rr>numero)&&(Rm<numero)&&(Rd<=Rr))||((Rm>numero)&&(Rr>numero)))
    {
        carry=1;
    }
    else
    {
       carry=0;
    }


    if(((Rm>numero)&&(Rr>numero)&&(Rd>numero)))
    {
        over=1;
    }
    else
    {
        over=0;
    }

}

