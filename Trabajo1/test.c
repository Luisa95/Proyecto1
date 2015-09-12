#include "registros.h"
#include "alu.h"
#include "InstruccionesDesplazamiento.h"
#include "banderas.h"

uint32_t Rd[12], Rm[12], Rr[12];

void declarar ();
void declarar ()

{
    int i;
    for (i=0;i<12;i++)
    {
    Rd[i]=Rm[i]=Rr[i];
    }
    pc=0;
}

void test ();
void test ()
{
    MOVS (Rd[0],5);
    NOP();
}
