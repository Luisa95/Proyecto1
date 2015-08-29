#include "InstruccionesDesplazamiento.h"

uint32_t LSL (uint32_t Rd, uint32_t Rm, uint32_t Rn)
{
    Rd=Rm<<Rn;
    return Rd;
}
uint32_t LSR (uint32_t Rd, uint32_t Rm, uint32_t Rn)
{
    Rd=Rm>>Rn;
    return Rd;
}
uint32_t BIC (uint32_t Rd, uint32_t Rm)
{
    Rd&=~Rm;
    return Rd;
}
uint32_t MVN (uint32_t Rd, uint32_t Rm)
{
    Rd=~Rm;
    return Rd;
}
uint32_t RSBS(uint32_t Rd, uint32_t Rm)
{
    Rd=0-Rm;
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
    Rd=Rd>>Rm; // Organizar
    return Rd;

}


