#include "banderas.h" 

void banderas(uint32_t Rd,uint32_t Rn, uint32_t Rr,struct bandera *puntero)
{
    uint32_t numero = 4294967296; //2^32 bits

    if(rx==0)
    {
        puntero->zero=1;
    }
    else
    {
        puntero->zero=0;
    }
    
    if((1<<31)&rx)
    {
        puntero->negativo=1;
    }
    else
    {
        puntero->negativo=0;
    }

    


    if(((Rn>numero)&&(Rr<numero)&&(Rd<numero))||((Rr>numero)&&(Rn<numero)&&(Rd<numero))||((Rn>numero)&&(Rr>numero)))
    {
        puntero->acarreo=1;
    }
    else
    {
        puntero->acarreo=0;
    }

    
    if(((Rn>numero)&&(Rr>numero)&&(Rd<=numero))||((Rn<=numero)&&(Rr<=numero)&&(Rd>numero)))
    {
        puntero->sobreflujo=1;
    }
    else
    {
        puntero->sobreflujo=0;
    }
}
