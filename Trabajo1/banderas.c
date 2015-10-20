#include "banderas.h"

void banderas(uint32_t Ra,uint32_t Rb, uint32_t Rc, bool flg[])
{
    /*Definir una estructura, declarar dentro un vector de banderas,
     retornar la estructura a los registros, estos la retornan al main y se imprime*/

    uint32_t numero = 4294967295; //2^32 bits -1 para el condicional
    if(Ra==0)
    {
        flg[0]=1;

    }
    else
    {
        flg[0]=0;
    }

    if((1<<31)&Ra)
    {
        flg[1]=1;
    }
    else
    {
        flg[1]=0;
    }


    if(((Rb>numero)&&(Rc<numero)&&(Ra<Rb))||((Rc>numero)&&(Rb<numero)&&(Ra<Rc))||((Rb>numero)&&(Rc>numero)))
    {
        flg[2]=1;
    }
    else
    {
       flg[2]=0;
    }

    if(((Rb>numero)&&(Rc>numero)&&(Ra>numero)))
    {
        flg[3]=1;
    }
    else
    {
        flg[3]=0;
}
}
