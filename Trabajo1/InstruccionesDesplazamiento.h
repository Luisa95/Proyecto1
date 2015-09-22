#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/**
*\brief funcion de desplazamiento logico a la izquierda
*\param Ra operando 1, ademas guarda el resultado
*\param Rb operando 2
*\param inmediato operando 3
*\return no retorna nada
**/
void LSL (uint32_t *Ra, uint32_t *Rb, uint32_t inmediato,int*pc);

/**
*\brief funcion de desplazamiento logico a la derecha
*\param Ra operando1, ademas guarda el resultado
*\param Rb operando 2
*\param inmediato operando 3
*\return no retorna nada
**/
void LSR (uint32_t *Ra, uint32_t *Rb, uint32_t inmediato,int*pc);

/**
*\brief funcion que realiza una AND entre un registro y el complemento de otro
*\param Ra operando 1
*\param Rb operando 2
*\return no retorna nada
**/
void BIC (uint32_t *Ra, uint32_t *Rb,int*pc);

/**
*\brief funcion que gua*Raa el complemento de un numero
*\param Ra operando 1
*\param Rb operando 2
*\return no retorna nada
**/
void MVN (uint32_t *Ra, uint32_t *Rb,int*pc);

/**
*\brief funcion que obtiene el complemento a dos de un numero
*\param Ra operando 1
*\param Rb operando 2
*\return no retorna nada
**/
void RSBS (uint32_t *Ra, uint32_t *Rb,int*pc);

/**
*\brief funcion que no hace ninguna operacion solo aumenta el valor del pc
**/
void NOP (int *pc);

/**
*\brief funcion de desplazamiento aritmetico a la derecha
*\param Ra operando 1
*\param Rb operando 2
*\return no retorna nada
**/
void ASRS (uint32_t *Ra, uint32_t *Rb,int*pc);

/**
*\brief funcion de rotacion a la derecha
*\param Ra operando 1
*\param Rb operando 2
*\return no retorna nada
**/
void ROR (uint32_t *Ra, uint32_t *Rb,int*pc);

void CMP (uint32_t *Ra, uint32_t *Rb, uint32_t *Rc,int*pc);

void CMN (uint32_t *Ra, uint32_t *Rb, uint32_t *Rc,int*pc);
