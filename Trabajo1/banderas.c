#include "banderas.h"
#include "registros.h"

flag banderas(uint32_t Ra,uint32_t Rb, uint32_t Rc)
{
    /*Definir una estructura, declarar dentro un vector de banderas,
     retornar la estructura a los registros, estos la retornan al main y se imprime*/
    flag retorno1;
    uint32_t numero = 4294967295; //2^32 bits -1 para el condicional
    if(Ra==0)
    {
        retorno1.banderas[0]=1;

    }
    else
    {
        retorno1.banderas[0]=0;
    }

    if((1<<31)&Ra)
    {
        retorno1.banderitas[1]=1;
    }
    else
    {
        retorno1.banderitas[1]=0;
    }


    if(((Rb>numero)&&(Rc<numero)&&(Ra<=Rb))||((Rc>numero)&&(Rb<numero)&&(Ra<=Rc))||((Rb>numero)&&(Rc>numero)))
    {
        retorno1.banderitas[2]=1;
    }
    else
    {
       retorno1.banderitas[2]=0;
    }

    if(((Rb>numero)&&(Rc>numero)&&(Ra>numero)))
    {
        retorno1.banderitas[3]=1;
    }
    else
    {
        retorno1.banderitas[3]=0;

return (retorno1);
}
