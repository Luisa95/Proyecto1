#include "InstruccionesDesplazamiento.h"

uint32_t LSL (uint32_t Rd, uint32_t Rm, uint32_t Rn)
{
    Rd=Rm<<Rn;     //Desplaza Rm a la izquierda tantas veces como lo diga Rn y lo guarda en Rd
    return Rd;
}
uint32_t LSR (uint32_t Rd, uint32_t Rm, uint32_t Rn)
{
    Rd=Rm>>Rn;     //Desplaza Rm a la derecha tantas veces como lo diga Rn y lo guarda en Rd
    return Rd;
}
uint32_t BIC (uint32_t Rd, uint32_t Rm)
{
    Rd&=~Rm;        //Realiza un and entre Rd y el complemento de Rm, y lo guarda en Rd
    return Rd;
}
uint32_t MVN (uint32_t Rd, uint32_t Rm)
{
    Rd=~Rm;         // Realiza el complemento de Rm y lo guarda en Rd
    return Rd;
}
uint32_t RSBS(uint32_t Rd, uint32_t Rm)
{
    Rd=0-Rm;      //Niega el registro Rm y lo guarda en Rd
    return Rd;
}

void NOP(void)
{
}
int32_t ASRS (int32_t Rd, int32_t Rm)
{
    Rd=Rd>>Rm; //Organizar
    return Rd;

}
uint32_t ROR (uint32_t Rd, uint32_t Rm)
{
    Rd=Rd>>Rm;

    if(Rd & 0x01)  //Si se cumple, hay un 1 en el LSB
		Rd = (Rd>>1) | 0x80;
	else
		Rd >>=1; //Sino hay un 1 en el LSB, simplemente se desplaza implicitamente lo que 'gira' es un 0
	return Rd;

}


