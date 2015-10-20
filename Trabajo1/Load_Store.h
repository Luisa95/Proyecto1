#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


/**
*\brief funcion de Carga
*\param Rt guarda el resultado
*\param Rn operando 1
*\param inmed operando 2
*\return no retorna nada
**/
void LDR(uint32_t Rt, uint32_t Rn, uint32_t inmed);
/**
*\brief funcion de Carga
*\param Rt guarda el resultado
*\param Rn operando 1
*\param inmed operando 2
*\return no retorna nada
**/
void LDRB(uint32_t Rt, uint32_t Rn, uint32_t inmed);
/**
*\brief funcion de Carga
*\param Rt guarda el resultado
*\param Rn operando 1
*\param inmed operando 2
*\return no retorna nada
**/
void LDRH(uint32_t Rt, uint32_t Rn, uint32_t inmed);
/**
*\brief funcion de Carga
*\param Rt guarda el resultado
*\param Rn operando 1
*\param inmed operando 2
*\return no retorna nada
**/
void LDRSB(uint32_t Rt, uint32_t Rn, uint32_t inmed);
/**
*\brief funcion de Carga
*\param Rt guarda el resultado
*\param Rn operando 1
*\param inmed operando 2
*\return no retorna nada
**/
void LDRSH(uint32_t Rt, uint32_t Rn, uint32_t inmed);
/**
*\brief funcion de almacenamiento
*\param Rt operando 1
*\param Rn operando 2
*\param inmed operando 3
*\param SP operando 4
*\return no retorna nada
**/
void STR(uint32_t Rt, uint32_t Rn, uint32_t inmed, uint32_t SP);
/**
*\brief funcion de almacenamiento
*\param Rt operando 1
*\param Rn operando 2
*\param inmed operando 3
*\param SP operando 4
*\return no retorna nada
**/
void STRB(uint32_t Rt, uint32_t Rn, uint32_t inmed, uint32_t SP);
/**
*\brief funcion de almacenamiento
*\param Rt operando 1
*\param Rn operando 2
*\param inmed operando 3
*\param SP operando 4
*\return no retorna nada
**/
void STRH(uint32_t Rt, uint32_t Rn, uint32_t inmed, uint32_t SP);
