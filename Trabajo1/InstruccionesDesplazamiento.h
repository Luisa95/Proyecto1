#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t LSL (uint32_t Rd, uint32_t Rm, uint32_t Rn);
/**
*\brief funcion de desplazamiento logico a la derecha
*\param Rd operando 1
*\param Rm operando 2
*\param Rn operando 3
*\return un entero de 32 bits con el resultado
**/
uint32_t LSR (uint32_t Rd, uint32_t Rm, uint32_t Rn);
/**
*\brief funcion de desplazamiento logico a la izquierda
*\param Rd operando 1
*\param Rm operando 2
*\param Rn operando 3
*\return un entero de 32 bits con el resultado
**/
uint32_t BIC (uint32_t Rd, uint32_t Rm);
/**
*\brief funcion que realiza un producto logico entre un numero negado
*\param Rd operando 1
*\param Rm operando 2
*\return un entero de 32 bits con el resultado
**/
uint32_t MVN (uint32_t Rd, uint32_t Rm);
/**
*\brief funcion que niega un numero y lo guarda
*\param Rd operando 1
*\param Rm operando 2
*\return un entero de 32 bits con el resultado
**/
uint32_t RSBS (uint32_t Rd, uint32_t Rm);
/**
*\brief funcion que vuelve negativo un numero
*\param Rd operando 1
*\param Rm operando 2
*\param Rn operando 3
*\return un entero de 32 bits con el resultado
**/



