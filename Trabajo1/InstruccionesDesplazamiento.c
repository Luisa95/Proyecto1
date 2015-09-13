#include "InstruccionesDesplazamiento.h"
#include "registros.h"
uint32_t LSL (uint32_t Rd, uint32_t Rm, int inmediato) // Rd: guarda le resultado, Rm # registro a desplazar inmediato:# de desplazamientos
{
    if (inmediato==0)
    {
      Rd=Rd<<Rm;
      printf("resultado guardado en Rd: %d   \n se desplazó %d veces",Rd, inmediato);
      pc=pc+2;
    }
    else Rd=Rm<<inmediato;     //Desplaza Rm a la izquierda tantas veces como lo diga Rn y lo guarda en Rd
    printf("resultado guardado en Rd: %d   \n se desplazó %d veces",Rd,Rm);
    pc=pc+2;
}
void NOP()
{
pc=pc+2;
}

void LSR (uint32_t Rd, uint32_t Rm, uint32_t Rn)
{
    Rd=Rm>>Rn
    printf("resultado guardado en Rd: %d   \n se desplazó %d veces",Rd,Rm);
    pc=pc+2;
         //Desplaza Rm a la derecha tantas veces como lo diga Rn y lo guarda en Rd

}
void BIC (uint32_t Rd, uint32_t Rm)
{
    Rd&=~Rm;        //Realiza un and entre Rd y el complemento de Rm, y lo guarda en Rd
    printf("resultado guardado en Rd: %d \n ",Rd,Rm);
    pc=pc+2
}
void MVN (uint32_t Rd, uint32_t Rm)
{
    Rd=~Rm;         // Realiza el complemento de Rm y lo guarda en Rd
    printf("resultado guardado en Rd: %d correspondiente al complemento de %d\n",Rd,Rm);
    pc=pc+2;
}
void RSBS(uint32_t Rd, uint32_t Rm)
{
    Rd=0-Rm;      //Niega el registro Rm y lo guarda en Rd
    printf("resultado guardado en Rd: %d   \n correspondiente al complemento a dos de %d \n",Rd,Rm);
    pc=pc+2;
}

void ASRS (int32_t Rd, int32_t Rm)
{
    Rd=Rd>>Rm;
    printf("resultado guardado en Rd: %d   \n se desplazó %d veces",Rd,Rm);
    pc=pc+2;

}
void ROR (uint32_t Rd, uint32_t Rm)
{
    Rd=Rd>>Rm;

    if(Rd & 0x01)  //Si se cumple, hay un 1 en el LSB
		Rd = (Rd>>1) | 0x80;
	else
		Rd >>=1; //Sino hay un 1 en el LSB, simplemente se desplaza implicitamente lo que 'gira' es un 0
	pc=pc+2;

}

