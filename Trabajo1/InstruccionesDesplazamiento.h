#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void LSL (uint32_t Rd, uint32_t Rm, uint32_t inmediato);
/**
*\brief funcion de desplazamiento logico a la derecha
*\param Rd operando 1
*\param Rm operando 2
*\param Rn operando 3
**/

void LSR (uint32_t Rd, uint32_t Rm, uint32_t Rr);
/**
*\brief funcion de desplazamiento logico a la izquierda
*\param Rd operando 1
*\param Rm operando 2
*\param Rn operando 3
**/

void BIC (uint32_t Rd, uint32_t Rm);
/**
*\brief funcion que realiza una AND entre un registro y el complemento de otro
*\param Rd operando 1
*\param Rm operando 2
**/

void MVN (uint32_t Rd, uint32_t Rm);
/**
*\brief funcion que guarda el complemento de un numero
*\param Rd operando 1
*\param Rm operando 2
**/

void RSBS (uint32_t Rd, uint32_t Rm);
/**
*\brief funcion que obtiene el complemento a dos de un numero
*\param Rd operando 1
*\param Rm operando 2
**/

void NOP ();
/**
*\brief Aumenta el valor del pc
**/

void ASRS (int32_t Rd, int32_t Rm);
/**
*\brief funcion de desplazamiento aritmetico a la derecha
*\param Rd operando 1
*\param Rm operando 2
**/
void ROR (uint32_t Rd, uint32_t Rm);
/**
*\brief funcion de rotacion
*\param Rd operando 1
*\param Rm operando 2
**/
