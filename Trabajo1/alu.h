#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void ADDS(uint32_t Rd, int inmediato );
void MOVS(uint32_t Rd, int inmediato);



void ADD(uint32_t Rd,uint32_t Rm,uint32_t Rr);
/**
*\brief funcion que suma
*\param Rd operando 1
*\param Rm operando 2
*\return un entero de 32 bits con el resultado
**/

void SUB(uint32_t Rd,uint32_t Rm);
/**
*\brief funcion que resta
*\param Rd operando 1
*\param Rm operando 2
*\return un entero de 32 bits con el resultado
**/

void AND(uint32_t Rd,uint32_t Rm);
/**
*\brief funcion de producto logico
*\param Rd operando 1
*\param Rm operando 2
*\return un entero de 32 bits con el resultado
**/

void OR(uint32_t Rd,uint32_t Rm);
/**
*\brief funcion de suma logica
*\param Rd operando 1
*\param Rm operando 2
*\return un entero de 32 bits con el resultado
**/

void EOR(uint32_t Rd,uint32_t Rm);
/**
*\brief funcion de or exclusiva
*\param Rd operando 1
*\param Rm operando 2
*\return un entero de 32 bits con el resultado
**/

void MOV(uint32_t Rd, uint32_t Rm);
/**
*\brief funcion que escribe un valor en un registro
*\param Rd operando 1
*\param Rm operando 2
*\return un entero de 32 bits con el resultado
**/

void MUL (uint32_t Rd, uint32_t Rm);
/**
*\brief funcion que multiplica dos registros
*\param Rd operando 1
*\param Rm operando 2
*\return un entero de 32 bits con el resultado
**/
