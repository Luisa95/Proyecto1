#include "registros.h"
#include "banderas.h"
#include "curses.h"

/**
*\brief funcion que suma
*\param Ra guarda el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return no retorna nada
**/
void ADD(uint32_t *Ra,uint32_t *Rb,uint32_t *Rc, int* flg);

/**
*\brief funcion que resta
*\param Ra guaRaa el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return n entero de 32 bits con el resultado
**/
void SUB(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc, int* flg);

/**
*\brief funcion de producto logico
*\param Ra guarda el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return un entero de 32 bits con el resultado
**/
void AND(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc, int* flg);

/**
*\brief funcion de suma logica
*\param Ra guarda el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return un entero de 32 bits con el resultado
**/
void OR(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc, int* flg);

/**
*\brief funcion de or exclusiva
*\param Ra guarda el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return un entero de 32 bits con el resultado
**/
void EOR(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc, int* flg);

/**
*\brief funcion que escribe un valor de un registro en otro registro
*\param Ra guarda el resultado
*\param Rb operando 1
*\return un entero de 32 bits con el resultado
**/
void MOV(uint32_t *Ra, uint32_t *Rb, int* flg);

/**
*\brief funcion que multiplica dos registros
*\param Ra guarda el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return un entero de 32 bits con el resultado
**/
void MUL (uint32_t *Ra, uint32_t *Rb, uint32_t *Rc, int* flg);
