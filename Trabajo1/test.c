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
    print("valor del Pc:%d",pc);
    Registros(Rd,Rm,Rr);
}

void test ();
void test ()
{
    MOVS (Rd[0],36);
    MOVS(Rd[1],6);
    // BL funcion
    // loop?
    // B loop
    // funcion
    MOV(Rd[2],Rd[0]);
    LSL(Rd[3],Rm[3],31);
    MOVS(Rd[0],0);
    MOVS(Rd[4],0);
    // funcion loop
    LSL(Rd[2],Rm[2],1);
    //ADCS
}
