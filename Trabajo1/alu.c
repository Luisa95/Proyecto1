#include "alu.h"
#include "registros.h"
// Entre Registros
void ADD(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc)
{
    *Ra=*(Rb)+*(Rc);       //suma 2 registros  // si la funcions recibe solo dos parametros, repetir en el llamamiento el priemr registro
    pc=pc+2;
    retorno=banderas (*Ra,*Rb,*Rc);
    return (retorno);
}

int SUB(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc)
{

    *Ra=*(Rb)-*(Rc);
    pc=pc+2;
    retorno=banderas (*Ra,*Rb,*Rc);
    return (retorno);

}

void MUL (uint32_t *Ra, uint32_t *Rb,uint32_t *Rc)
{
    *Ra=(*Rb)*(*Rc);
    pc=pc+2;     //Multiplica 2 registros
   retorno=banderas (*Ra,*Rb,*Rc);
    return (retorno);
}

void AND(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc)
{
    *Ra=(*Rb)&(*Rc);
    pc=pc+2;
    retorno=banderas (*Ra,*Rb,*Rc);
    return (retorno);
}

void OR(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc)
{
    *Ra=(*Rb)|(*Rc);
    pc=pc+2;
    retorno=banderas (*Ra,*Rb,*Rc);
    return (retorno);

}

void EOR(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc)
{
    *Ra=(*Rb)^(*Rc);
    pc=pc+2;
    retorno=banderas (*Ra,*Rb,*Rc);
    return (retorno);
};

void MOV(uint32_t *Ra,uint32_t *Rb)
{
    *Ra=*Rb;
    pc=pc+2;
    retorno=banderas(*Ra,*Rb);
    return (retorno);
};
// COn inmediato
void MOVS(uint32_t *Ra, uint32_t inmediato)
{
    *Ra=inmediato;
    pc=pc+2;
    retorno=banderas (*Ra,*Ra,*Ra);
    return (retorno);
};

void ADDS(uint32_t *Ra,uint32_t *Rb, uint32_t inmediato)
{
    *Ra=(*Rb)+inmediato;
     pc=pc+2;
     retorno=banderas (*Ra,*Ra,*Rb);
    return (retorno);
}
void SUBS(uint32_t *Ra,uint32_t *Rb, uint32_t inmediato)
{
    *Ra=(*Rb)-inmediato;
    pc=pc+2;
    retorno=banderas (*Ra,*Rb,*Rb);
    return (retorno);
}
void MULS (uint32_t *Ra,uint32_t *Rb, uint32_t inmediato)
{
    *Ra=(*Rb)*inmediato;
    pc=pc+2;     //Multiplica 2 registros
    retorno=banderas (*Ra,*Rb,*Rb);
    return (retorno);
}
