#include "InstruccionesDesplazamiento.h"

void desplazamiento (uint32_t Rd[], uint32_t Rm[], uint32_t Rn[])
{
 int des;
 printf("Instruccion de desplazamiento:\n1.Desplazamiento a la izquierda\n2.Desplazamiento a la derecha\n3. ");
 scanf("%d",&des);

 switch (des)
 {
 case 1:
    {
          Rd=Rm<<Rn;
          break;
    }
 case 2:
     {
          Rd=Rm>>Rn;
          break;
     }

 case 3:
     {
             Rd&=~Rm;
             break;

     }
 case 4:
     {
             Rd=~Rm;
             break;

     }
 case 5:
     {
             Rd=0-Rm;
             break;

     }
 case 6:
     {
         break;
     }
 case 7:
     {
             Rd=Rd>>Rm; //Organizar
             break;

     }
 case 8:
     {
             Rd=Rd>>Rm; // Organizar
             break;

     }
 }


}








/*
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

*/

/*
copìa >:3

uint32_t REV(uint32_t Rd,uint32_t Rm)
{
    u32tobyte_t R;

    R.data = Rm;
    Rd = (uint32_t)(R.byte0 << 24) | (uint32_t)(R.byte3) | (uint32_t)(R.byte1 << 16) | (uint32_t)(R.byte2 << 8);

    return Rd;
}

uint32_t REV16(uint32_t Rd,uint32_t Rm)
{
    u32tobyte_t R;
    R.data = Rm;
    Rd = (uint32_t)(R.byte0 << 16) | (uint32_t)(R.byte3<<8) | (uint32_t)(R.byte1 << 24) | (uint32_t)(R.byte2);

    return Rd;
}

uint32_t REVSH(uint32_t Rd,uint32_t Rm)
{

return Rd;
}
*/



