#include "banderas.h"
#include <curses.h>

/**
*\brief funcion que suma
*\param Ra guarda el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return no retorna nada
**/
void ADD(uint32_t *Ra,uint32_t Rb,uint32_t Rc, bool flg[], int *pc);

/**
*\brief funcion que resta
*\param Ra guaRaa el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return No retorna nada
**/
void SUB(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc, bool*flg, int *pc);

/**
*\brief funcion de producto logico
*\param Ra guarda el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return No retorna nada
**/
void AND(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc, bool*flg, int *pc);

/**
*\brief funcion de suma logica
*\param Ra guarda el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return No retorna nada
**/
void OR(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc, bool*flg, int *pc);

/**
*\brief funcion de or exclusiva
*\param Ra guarda el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return No retorna nada
**/
void EOR(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc, bool*flg, int *pc);

/**
*\brief funcion que escribe un valor de un registro en otro registro
*\param Ra guarda el resultado
*\param Rb operando 1
*\return No retorna nada
**/
void MOV(uint32_t *Ra, uint32_t *Rb, bool*flg, int *pc);

/**
*\brief funcion que multiplica dos registros
*\param Ra guarda el resultado
*\param Rb operando 1
*\param Rc operando 2
*\return No retorna nada
**/
void MUL (uint32_t *Ra, uint32_t *Rb, uint32_t *Rc, bool*flg, int *pc);
