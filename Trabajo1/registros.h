#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int pc;

void Registros(uint32_t Rd[], uint32_t Rm[], uint32_t Rr[]);
// se tiene que le MO cuenta con dos series de 12 registros de 32 bits c/u
// se usa el tipo de variable uint32_t para representar cada uno de estos.
// a estos se les puede dar un valor decimal y operar normalmente, el valor
//minimo que pueden tener es 0, el m�ximo 255
