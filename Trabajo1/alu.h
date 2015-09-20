#include "registros.h"
#include "banderas.h"
#include "curses.h"
/**
*\brief Suma un registro con un numero
*\param Ra, guarda el resultado
*\param Rb operando 1
*\param inmediato operando 2
*\return no retorna nada
**/
flag ADDS(uint32_t *Ra,uint32_t *Rb, uint32_t inmediato);

/**
*\brief Copia el valor del inmediato en el registro
*\param Ra guarda el resultado
*\param inmediato operando 2
*\return no retorna nada
**/
flag MOVS(uint32_t *Ra, uint32_t inmediato);

/**
*\brief Resta un registro con un numero
*\param Ra guarda el resultado
*\param Rb operando 1
*\param inmediato operando 2
*\return no retorna nada
**/
flag SUBS(uint32_t *Ra,uint32_t *Rb, uint32_t inmediato);

/**
*\brief Multiplica un registro con un numero
*\param Ra, guarda el resultado
*\param Rb operando 1
*\param inmediato operando 2
*\return no retorna nada
**/
flag MULS (uint32_t *Ra,uint32_t *Rb, uint32_t inmediato);

/**
*\brief funcion que suma
*\param Ra guarda el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return no retorna nada
**/
flag ADD(uint32_t *Ra,uint32_t *Rb,uint32_t *Rc);

/**
*\brief funcion que resta
*\param Ra guaRaa el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return n entero de 32 bits con el resultado
**/
flag SUB(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc);

/**
*\brief funcion de producto logico
*\param Ra guarda el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return un entero de 32 bits con el resultado
**/
flag AND(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc);

/**
*\brief funcion de suma logica
*\param Ra guarda el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return un entero de 32 bits con el resultado
**/
flag OR(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc);

/**
*\brief funcion de or exclusiva
*\param Ra guarda el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return un entero de 32 bits con el resultado
**/
flag EOR(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc);

/**
*\brief funcion que escribe un valor de un registro en otro registro
*\param Ra guarda el resultado
*\param Rb operando 1
*\return un entero de 32 bits con el resultado
**/
flag MOV(uint32_t *Ra, uint32_t *Rb);

/**
*\brief funcion que multiplica dos registros
*\param Ra guarda el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return un entero de 32 bits con el resultado
**/
flag MUL (uint32_t *Ra, uint32_t *Rb, uint32_t *Rc);
