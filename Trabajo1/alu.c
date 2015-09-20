#include "alu.h"
#include "registros.h"
#include<banderas.h>
// Entre Registros
flag ADD(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc)
{
    flag retorno;
    *Ra=*(Rb)+*(Rc);       //suma 2 registros  // si la funcions recibe solo dos parametros, repetir en el llamamiento el priemr registro
    pc=pc+2;
    retorno=banderas (*Ra,*Rb,*Rc);
    return (retorno);
}

flag SUB(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc)
{
   flag retorno;
    *Ra=*(Rb)-*(Rc);
    pc=pc+2;
    retorno=banderas (*Ra,*Rb,*Rc);
    return (retorno);
}

flag MUL (uint32_t *Ra, uint32_t *Rb,uint32_t *Rc)
{
    flag retorno;
    *Ra=(*Rb)*(*Rc);
    pc=pc+2;     //Multiplica 2 registros
   retorno=banderas (*Ra,*Rb,*Rc);
    return (retorno);
}

flag AND(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc)
{
    flag retorno;
    *Ra=(*Rb)&(*Rc);
    pc=pc+2;
    retorno=banderas (*Ra,*Rb,*Rc);
    return (retorno);
}

flag OR(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc)
{
    flag retorno;
    *Ra=(*Rb)|(*Rc);
    pc=pc+2;
    retorno=banderas (*Ra,*Rb,*Rc);
    return (retorno);
}

flag EOR(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc)
{
    flag retorno;
    *Ra=(*Rb)^(*Rc);
    pc=pc+2;
    retorno=banderas (*Ra,*Rb,*Rc);
    return (retorno);
};

flag MOV(uint32_t *Ra,uint32_t *Rb)
{
    flag retorno;
    *Ra=*Rb;
    pc=pc+2;
    retorno=banderas(*Ra,*Rb);
    return (retorno);
};
// COn inmediato
