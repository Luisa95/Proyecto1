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
    Rd=~Rm
}
uint32_t RSBS (uint32_t Rd, uint32_t Rm, uint32_t Rn)
{
    Rd=Rn-Rm;
    return Rd;
}
