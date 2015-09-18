#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// variables globales
int pc;
/**
*\brief funcion que muestra los registros
*\param Rd operando 1
*\param Rm operando 2
*\param Rr operando 3
*\return no retorna nada
**/
void Registros(uint32_t *Ra, uint32_t *Rb, uint32_t *Rc);

// se tiene que le MO cuenta con dos series de 12 registros de 32 bits c/u
// se usa el tipo de variable uint32_t para representar cada uno de estos.
// a estos se les puede dar un valor decimal y operar normalmente, el valor
