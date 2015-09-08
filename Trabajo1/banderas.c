#include "banderas.h"

void banderas(uint32_t Rn,uint32_t Rd, uint32_t Rm,struct bandera *puntero)
{
//<<<<<<< HEAD
    uint32_t numerito = 4294967296; //2^32 bits, referencia
//=======
    uint64_t numero = 4294967296;
//>>>>>>> a4a3a9542f8500b04d4bd5e0ad42af22ec62a84a

    if(Rn==0)
    {
        puntero->zero=1;
    }
    else
    {
        puntero->zero=0;
    }

    if((1<<31)&Rn)
    {
        puntero->negativo=1;
    }
    else
    {
        puntero->negativo=0;
    }


    if(((Rm>numero)&&(Rd<numero)&&(Rn<numero))||((Rm>numero)&&(Rd<numero)&&(Rn<numero))||((Rd>numero)&&(Rm>numero)))
    {   // numero es le valor máximo posible para un entero de 32 bits, por lo tanto rm nunca será mayor ya que sus caracteristicas se lo impiden
        //el acarreo puede activarse al sumar o multiplicar
        puntero->acarreo=1;
    }
    else
    {
        puntero->acarreo=0;
    }


    if(((Rd>numero)&&(Rm>numero)&&(Rn<=numero))||((Rd<=numero)&&(Rm<=numero)&&(Rn>numero)))
    {
        puntero->sobreflujo=1;
    }
    else
    {
        puntero->sobreflujo=0;
    }


}
