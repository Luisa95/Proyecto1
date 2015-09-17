#include "alu.h"
#include "registros.h"
// Entre Registros
void ADD(uint32_t *Rd,uint32_t *Rm, uint32_t *Rr)
{
    *Rd=*Rm+*Rr;       //suma 2 registros  // si la funcions recibe solo dos parametros, repetir en el llamamiento el priemr registro
    printf("El resultado es: %d \n",Rd);
    banderas (Rd,Rm,Rr);
    pc=pc+2;
}

void SUB(uint32_t Rd,uint32_t Rm, uint32_t Rr)
{
    Rd=Rm-Rr;
    mvprintw(6,20,"El resultado es: %d \n",Rd);
    banderas (Rd,Rm,Rr);
    pc=pc+2;

}

void MUL (uint32_t Rd, uint32_t Rm,uint32_t Rr)
{
    Rd=Rm*Rr;
    printf("El resultado es: %d \n",Rd);
    banderas (Rd,Rm,Rr);
    pc=pc+2;     //Multiplica 2 registros

}



void AND(uint32_t Rd,uint32_t Rm, uint32_t Rr)
{
    Rd=Rm&Rr;
    printf("El resultado es: %d \n",Rd);
    banderas (Rd,Rm,Rr);
    pc=pc+2;
}

void OR(uint32_t *Rd,uint32_t *Rm, uint32_t *Rr)
{
    *Rd=*Rm|*Rr;
    printf("El resultado es: %i \n",Rd);
    banderas (Rd,Rm,Rr);
    pc=pc+2;

}

void EOR(uint32_t Rd,uint32_t Rm, uint32_t Rr)
{
    Rd=Rm^Rr;
    printf("El resultado es: %d \n",Rd);
    banderas (Rd,Rm,Rr);
    pc=pc+2;

};

void MOV(uint32_t Rd,uint32_t Rm)
{
    Rd=Rm;
    printf("El resultado  es: %d \n",Rd);
    banderas (Rd,Rd,Rm);
    pc=pc+2;

};
// COn inmediato
void MOVS(uint32_t Rd, uint32_t inmediato)
{
    Rd=inmediato;
    banderas(Rd,Rd,Rd); // puede activar l  bandera zero?
    pc=pc+2;
};

void ADDS(uint32_t Rd,uint32_t Rm, uint32_t inmediato)
{
    Rd=Rm+inmediato;
    printf("El resultado de sumar %d y %d es :%d \n",Rm,inmediato,Rd);
    banderas (Rd,Rm,inmediato);
    pc=pc+2;
}
void SUBS(uint32_t Rd,uint32_t Rm, uint32_t inmediato)
{
    Rd=Rm-inmediato;
    printf("El resultado de la resta entre %d y %d es :%d \n",Rm,inmediato,Rd);
    banderas (Rd,Rm,inmediato);
    pc=pc+2;
}
void MULS (uint32_t Rd,uint32_t Rm, uint32_t inmediato)
{
    Rd=Rm*inmediato;
    printf("El resultado es: %d \n",Rd);
    banderas (Rd,Rm,inmediato);
    pc=pc+2;     //Multiplica 2 registros

}
