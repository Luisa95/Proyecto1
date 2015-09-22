#include "InstruccionesDesplazamiento.h"
#include "registros.h"

void LSL (uint32_t *Ra, uint32_t *Rb, uint32_t inmediato) // Rd: guarda le resultado, *Rb # registro a desplazar inmediato:# de desplazamientos
{
    if (inmediato==0)
    {
     *Ra=(*Ra)<<(*Rb);
      pc=pc+2;
    }
    else
    *Ra=(*Rb)<<inmediato;     //Desplaza *Rb a la izquierda tantas veces como lo diga Rn y lo guarda en Rd
    pc=pc+2;
}
void NOP()
{
    pc=pc+2;
}

void LSR (uint32_t *Ra, uint32_t *Rb, uint32_t inmediato)
{
    if (inmediato==0)
    {
     *Ra=(*Ra)>>(*Rb);
      pc=pc+2;
    }
    else
   *Ra=(*Rb)>>inmediato;     //Desplaza *Rb a la izquie*Raa tantas veces como lo diga Rn y lo gua*Raa en *Ra
    pc=pc+2;
}
void BIC (uint32_t *Ra, uint32_t *Rb)
{
   *Ra&=~(*Rb);        //Realiza un and entre *Ra y el complemento de *Rb, y lo gua*Raa en *Ra
    pc=pc+2;
}
void MVN (uint32_t *Ra, uint32_t *Rb)
{
   *Ra=~(*Rb);         // Realiza el complemento de *Rb y lo gua*Raa en *Ra
    pc=pc+2;
}
void RSBS(uint32_t *Ra, uint32_t *Rb)
{
    *Ra=0-(*Rb);      //Niega el registro *Rb y lo gua*Raa en *Ra
    pc=pc+2;
}

void ASRS (uint32_t *Ra, uint32_t *Rb)
{
    *Ra=(*Ra)>>(*Rb);
    pc=pc+2;

}
void ROR (uint32_t *Ra, uint32_t *Rb)
{
    *Ra=(*Ra)>>(*Rb);

    if(*Ra & 0x01)  //Si se cumple, hay un 1 en el LSB
		*Ra = (*Ra>>1) | 0x80;
	else
		*Ra >>=1; //Sino hay un 1 en el LSB, simplemente se desplaza implicitamente lo que 'gira' es un 0
	pc=pc+2;
}
void CMP (uint32_t *Ra, uint32_t *Rb, uint32_t *Rc)
{

}
void CMN (uint32_t *Ra, uint32_t *Rb, uint32_t *Rc)
{

}
