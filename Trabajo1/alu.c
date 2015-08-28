
#include "alu.h"

uint32_t ADD(uint32_t Rd,uint32_t Rm)
{
    Rd=Rd+Rm;//suma 2 registros
    return Rd;
}

uint32_t SUB(uint32_t Rd,uint32_t Rm)
{
    Rd=Rd-Rm;//resta 2 registros
    return Rd;
}

uint32_t AND(uint32_t Rd,uint32_t Rm)
{
    Rd=Rd&Rm;//and entre los registros
    return Rd;
}

uint32_t OR(uint32_t Rd,uint32_t Rm)
{
    Rd=Rd|Rm;//or entre los registros
    return Rd;
}

uint32_t EOR(uint32_t Rd,uint32_t Rm)
{
    Rd=Rd^Rm;//xor entre los registros
    return Rd;
};

uint32_t MOV(uint32_t Rd,uint32_t Rm)
{
    Rd=Rm;
    return Rd;
};

uint32_t MUL (uint32_t Rd, uint32_t Rm)
{
    Rd=Rd*Rm;
    return Rd;
}
