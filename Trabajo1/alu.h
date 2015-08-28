#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t ADD(uint32_t Rd,uint32_t Rm);
/**
*\brief funcion que suma
*\param Rd operando 1
*\param Rm operando 2
*\return un entero de 32 bits con el resultado
**/
uint32_t SUB(uint32_t Rd,uint32_t Rm);
/**
*\brief funcion que resta
*\param Rd operando 1
*\param Rm operando 2
*\return un entero de 32 bits con el resultado
**/
uint32_t AND(uint32_t Rd,uint32_t Rm);
/**
*\brief funcion de producto logico
*\param Rd operando 1
*\param Rm operando 2
*\return un entero de 32 bits con el resultado
**/
uint32_t OR(uint32_t Rd,uint32_t Rm);
/**
*\brief funcion de suma logica
*\param Rd operando 1
*\param Rm operando 2
*\return un entero de 32 bits con el resultado
**/
uint32_t EOR(uint32_t Rd,uint32_t Rm);
/**
*\brief funcion de or exclusiva
*\param Rd operando 1
*\param Rm operando 2
*\return un entero de 32 bits con el resultado
**/
uint32_t MOV(uint32_t Rd, uint32_t Rm);
/**
*\brief funcion que escribe un valor en un registro
*\param Rd operando 1
*\param Rm operando 2
*\return un entero de 32 bits con el resultado
**/
uint32_t MUL (uint32_t Rd, uint32_t Rm);
/**
*\brief funcion que multiplica dos registros
*\param Rd operando 1
*\param Rm operando 2
*\return un entero de 32 bits con el resultado
**/
