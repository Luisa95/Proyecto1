#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void ADD(int8_t Rd,int8_t Rr);
/**
*\brief funcion que suma
*\param Rd operando 1
*\param Rr operando 2
**/
void SUB(int8_t Rd,int8_t Rr);
/**
*\brief funcion que resta
*\param Rd operando 1
*\param Rr operando 2
**/
void AND(int8_t Rd,int8_t Rr);
/**
*\brief funcion de producto logico
*\param Rd operando 1
*\param Rr operando 2
**/
void OR(int8_t Rd,int8_t Rr);
/**
*\brief funcion de suma logica
*\param Rd operando 1
*\param Rr operando 2
**/
void EOR(int8_t Rd,int8_t Rr);
/**
*\brief funcion de or exclusiva
*\param Rd operando 1
*\param Rr operando 2
**/
void MOV(int8_t Rd, int8_t Rr);
/**
*\brief funcion que mueve un numero en otro
*\param Rd operando 1
*\param Rr operando 2
**/
