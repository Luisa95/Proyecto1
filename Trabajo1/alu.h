#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int retorno;
/**
*\brief Suma un registro con un numero
*\param Ra, guarda el resultado
*\param Rb operando 1
*\param inmediato operando 2
*\return no retorna nada
**/
void ADDS(uint32_t *Ra,uint32_t *Rb, uint32_t inmediato);

/**
*\brief Copia el valor del inmediato en el registro
*\param Ra guarda el resultado
*\param inmediato operando 2
*\return no retorna nada
**/
void MOVS(uint32_t *Ra, uint32_t inmediato);

/**
*\brief Resta un registro con un numero
*\param Ra guarda el resultado
*\param Rb operando 1
*\param inmediato operando 2
*\return no retorna nada
**/
void SUBS(uint32_t *Ra,uint32_t *Rb, uint32_t inmediato);

/**
*\brief Multiplica un registro con un numero
*\param Ra, guarda el resultado
*\param Rb operando 1
*\param inmediato operando 2
*\return no retorna nada
**/
void MULS (uint32_t *Ra,uint32_t *Rb, uint32_t inmediato);

/**
*\brief funcion que suma
*\param Ra guarda el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return no retorna nada
**/
void ADD(uint32_t *Ra,uint32_t *Rb,uint32_t *Rc);

/**
*\brief funcion que resta
*\param Ra guaRaa el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return n entero de 32 bits con el resultado
**/
int SUB(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc);

/**
*\brief funcion de producto logico
*\param Ra guarda el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return un entero de 32 bits con el resultado
**/
void AND(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc);

/**
*\brief funcion de suma logica
*\param Ra guarda el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return un entero de 32 bits con el resultado
**/
void OR(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc);

/**
*\brief funcion de or exclusiva
*\param Ra guarda el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return un entero de 32 bits con el resultado
**/
void EOR(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc);

/**
*\brief funcion que escribe un valor de un registro en otro registro
*\param Ra guarda el resultado
*\param Rb operando 1
*\return un entero de 32 bits con el resultado
**/
void MOV(uint32_t *Ra, uint32_t *Rb);

/**
*\brief funcion que multiplica dos registros
*\param Ra guarda el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return un entero de 32 bits con el resultado
**/
void MUL (uint32_t *Ra, uint32_t *Rb, uint32_t *Rc);
