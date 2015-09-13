#include "alu.h"
#include "registros.h"
void MOVS(uint32_t Rd, int inmediato)
{
    Rd=inmediato;
    banderas(Rd,Rd,Rd); // puede activar l  bandera zero?

};
void ADD(uint32_t Rd,uint32_t Rm, uint32_t Rr)
{
    Rd=Rm+Rr;       //suma 2 registros  // si la funcions recibe solo dos parametros, repetir en el llamamiento el priemr registro
    printf("El resultado es: %d",Rd);
    banderas (Rd,Rm,Rr);
    pc=pc+2;
}

void SUB(uint32_t Rd,uint32_t Rm, uint32_t Rr)
{
    Rd=Rm-Rr;
    printf("El resultado es: %d",Rd);
    banderas (Rd,Rm,Rr);
    pc=pc+2;

}

void AND(uint32_t Rd,uint32_t Rm, uint32_t Rr)
{
    Rd=Rm&Rr;
    printf("El resultado es: %d",Rd);
    banderas (Rd,Rm,Rr);
    pc=pc+2;
}

void OR(uint32_t Rd,uint32_t Rm, uint32_t Rr)
{
    Rd=Rm|Rr;
    printf("El resultado es: %d",Rd);
    banderas (Rd,Rm,Rr);
    pc=pc+2;

}

void EOR(uint32_t Rd,uint32_t , uint32_t Rr)
{
    Rd=Rm^Rr;
    printf("El resultado es: %d",Rd);
    banderas (Rd,Rm,Rr);
    pc=pc+2;

};

void MOV(uint32_t Rd,uint32_t Rm)
{
    Rd=Rm;
    printf("El resultado  es: %d",Rd);
    banderas (Rd,Rd,Rm);
    pc=pc+2;

};

void MUL (uint32_t Rd, uint32_t Rm,uint32_t Rr)
{
    Rd=Rm*Rr;
    printf("El resultado es: %d",Rd);
    banderas (Rd,Rm,Rr);
    pc=pc+2;     //Multiplica 2 registros

}

