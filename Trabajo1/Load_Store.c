#include "Load_Store.h"
#include "ram.h"

void LDR(uint32_t *Rt, uint32_t Rn, uint32_t inmed, int*pc)
{
*Rt=(ram[Rn+inmed])+(ram[Rn+inmed+1]<<8)+(ram[Rn+inmed+2]<<16)+(ram[Rn+inmed+3]<<24);
*pc++
}

void LDRB(uint32_t *Rt, uint32_t Rn, uint32_t inmed, int *pc)
{
    *Rt =ram[Rn+inmed];
    pc++;
}

void LDRH(uint32_t *Rt, uint32_t Rn, uint32_t inmed, int*pc)
{
    *Rt=ram[Rn+inmed]+(ram[Rn+inmed+1]<<8);
	*pc++;
}
void LDRSB(uint32_t *Rt, uint32_t Rn, uint32_t inmed, int*pc)
{

	*Rt=(uint32_t)(ram[Rn+inmed]);
	pc++;

}
void LDRSH(uint32_t *Rt, uint32_t Rn, uint32_t inmed, int*pc)
{
    *Rt=(uint32_t)(ram[Rn+inmed])+(uint32_t)(ram[Rn+inmed+1]<<8);
	pc++;
}
void STR(uint32_t *Rt, uint32_t Rn, uint32_t inmed, uint32_t SP, int*pc)
{

	ram[Rn+inmed]=(uint8_t)(*Rt);
	ram[Rn+inmed+1]=(uint8_t)(*Rt>>8);
	ram[Rn+inmed+3]=(uint8_t)(*Rt>>24);
	ram[Rn+inmed+2]=(uint8_t)(*Rt>>16);
	pc++;

}
void STRB(uint32_t *Rt, uint32_t Rn, uint32_t inmed, uint32_t SP, int*pc)
{
    ram[Rn+inmed]=(uint8_t)(*Rt);
    pc++;
}
void STRH(uint32_t *Rt, uint32_t Rn, uint32_t inmed, uint32_t SP, int*pc)
{

	ram[Rn+inmed]=(uint8_t)(*Rt);
   	ram[Rn+inmed+1]=(uint8_t)(*Rt>>8);
	pc++;
}
