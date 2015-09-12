#include "alu.h"
#include "registros.h"
void MOVS(uint32_t Rd, int inmediato)
{
    Rd=inmediato;

};
void ADD(uint32_t Rd,uint32_t Rm, uint32_t Rr)
{
    Rd=Rm+Rr;       //suma 2 registros  // si la funcions recibe solo dos parametros, repetir en el llamamiento el priemr registro
    printf("El resultado es: %d",Rd);
    banderas (Rd,Rm,Rr);
    pc=pc+2;
}

void SUB(uint32_t Rd,uint32_t Rm)
{
    Rd=Rd-Rm;       //resta 2 registros

}

void AND(uint32_t Rd,uint32_t Rm)
{
    Rd=Rd&Rm;      //and entre los registros

}

void OR(uint32_t Rd,uint32_t Rm)
{
    Rd=Rd|Rm;      //or entre los registros

}

void EOR(uint32_t Rd,uint32_t Rm)
{
    Rd=Rd^Rm;      //xor entre los registros

};

void MOV(uint32_t Rd,uint32_t Rm)
{
    Rd=Rm;        //Mueve un registro en otro

};

void MUL (uint32_t Rd, uint32_t Rm)
{
    Rd=Rd*Rm;     //Multiplica 2 registros

}

