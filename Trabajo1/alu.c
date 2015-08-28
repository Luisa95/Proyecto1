
#include "alu.h"

uint32_t ADD(uint32_t Rd,uint32_t Rr)
{
    Rd=Rd+Rr;//suma 2 registros
    return Rd;
}

uint32_t SUB(uint32_t Rd,uint32_t Rr)
{
    Rd=Rd-Rr;//resta 2 registros
    return Rd;
}

uint32_t AND(uint32_t Rd,uint32_t Rr)
{
    Rd=Rd&Rr;//and entre los registros
    return Rd;
}

uint32_t OR(uint32_t Rd,uint32_t Rr)
{
    Rd=Rd|Rr;//or entre los registros
    return Rd;
}

uint32_t EOR(uint32_t Rd,uint32_t Rr)
{
    Rd=Rd^Rr;//xor entre los registros
    return Rd;
};

uint32_t MOV(uint32_t Rd,uint32_t Rr)
{
    Rd=Rr;
    return Rd;
};
