#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/**
*\brief Suma un registro con un número
*\param Rd, guarda el resutlado
*\param Rm operando 1
*\param inmediato operando 2
*\return
**/
void ADDS(uint32_t Rd,uint32_t Rm, uint32_t inmediato);

/**
*\brief Copia el valor del inmediato en el registro
*\param Rd guarda el resultado
*\param inmediato operando 2
*\return
**/
void MOVS(uint32_t Rd, uint32_t inmediato);

/**
*\brief Resta un registro con un número
*\param Rd guarda el resultado
*\param Rm operando 1
*\param inmediato operando 2
*\return
**/
void SUBS(uint32_t Rd,uint32_t Rm, uint32_t inmediato);

/**
*\brief Multiplica un registro con un número
*\param Rd, guarda el resultado
*\param Rm operando 1
*\param inmediato operando 2
*\return
**/
void MULS (uint32_t Rd,uint32_t Rm, uint32_t inmediato);

/**
*\brief funcion que suma
*\param Rd guarda el resultado
*\param Rm operando 1
*\param Rr operando 2
*\return
**/
void ADD(uint32_t *Rd,uint32_t *Rm,uint32_t *Rr);

/**
*\brief funcion que resta
*\param Rd guarda el resultado
*\param Rm operando 1
*\param Rr operando 2
*\return un entero de 32 bits con el resultado
**/
void SUB(uint32_t Rd,uint32_t Rm, uint32_t Rr);

/**
*\brief funcion de producto logico
*\param Rd guarda el resultado
*\param Rm operando 1
*\param Rr operando 2
*\return un entero de 32 bits con el resultado
**/
void AND(uint32_t Rd,uint32_t Rm, uint32_t Rr);

/**
*\brief funcion de suma logica
*\param Rd guarda el resultado
*\param Rm operando 1
*\param Rr operando 2
*\return un entero de 32 bits con el resultado
**/
void OR(uint32_t *Rd,uint32_t *Rm, uint32_t *Rr);

/**
*\brief funcion de or exclusiva
*\param Rd guarda el resultado
*\param Rm operando 1
*\param Rr operando 2
*\return un entero de 32 bits con el resultado
**/
void EOR(uint32_t Rd,uint32_t Rm, uint32_t Rr);

/**
*\brief funcion que escribe un valor de un registro en otro registro
*\param Rd guarda el resultado
*\param Rm operando 1
*\return un entero de 32 bits con el resultado
**/
void MOV(uint32_t Rd, uint32_t Rm);

/**
*\brief funcion que multiplica dos registros
*\param Rd guarda el resultado
*\param Rm operando 1
*\param Rr operando 2
*\return un entero de 32 bits con el resultado
**/
void MUL (uint32_t Rd, uint32_t Rm, uint32_t Rr);
