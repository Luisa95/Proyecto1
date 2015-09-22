#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <curses.h>

/**
*\brief funcion que registran los estados del microprocesador
*\param Ra operando 1
*\param Rb operando 2
*\param Rc operando 3
*\return no retorna nada
**/
void banderas (uint32_t Ra,uint32_t Rb,uint32_t Rc, bool*flg);
