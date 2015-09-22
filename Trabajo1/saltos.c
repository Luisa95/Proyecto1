#include "banderas.h"
#include "alu.h"
#include <curses.h>


uint32_t AUX;

void B( uint32_t valor, int *pc, bool *flg)
{
   *pc+= 2*valor;
void BEQ( uint32_t valor, int *pc, bool *flg)
{
    obtenerBandera(flg);
    if(flg[0]==1){
       *pc+= 2*valor;
    }
    else
	{
        *pc+=2;
    }
}
void BNE( uint32_t valor, int *pc, bool *flg)
{
    obtenerBandera(flg);
    if(flg[0]==0)
	{
        *pc+= 2*valor;
    }
    else
	{
        *pc+=2;
    }
}
void BCS( uint32_t valor, int *pc, bool *flg)
{
    obtenerBandera(flg);
    if(flg[1]==1)
	{
        *pc+= 2*valor;
    }
    else
	{
        *pc+=2;
    }
}
void BCC( uint32_t valor, int *pc, bool *flg)
{
    obtenerBandera(flg);
    if(flg[1]==0)
	{
        *pc+= 2*valor;
    }
    else
	{
        *pc+=2;
    }
}
void BMI( uint32_t valor, int *pc, bool *flg)
{
    obtenerBandera(flg);
    if(flg[2]==1)
	{
        *pc+= 2*valor;    }
    else
            {
        *pc+=2;
    }
}
void BPL( uint32_t valor, int *pc, bool *flg)
{
    obtenerBandera(flg);
    if(flg[2]==0)
	{
        *pc+= 2*valor;
    }
    else
	{
        *pc+=2;
    }
}
void BVS( uint32_t valor, int *pc, bool *flg)
{
    obtenerBandera(flg);
    if(flg[3]==1)
            {
        *pc+= 2*valor;
    }
    else
	{
        *pc+=2;
    }
}
void BVC( uint32_t valor, int *pc, bool *flg)
{
    obtenerBandera(flg);
    if(flg[3]==0) {
        *pc+= 2*valor;
        }
    else {
        *pc+=2;  }
}
void BHI( uint32_t valor, int *pc, bool *flg){

    obtenerBandera(flg);
    if((flg[1]==1)&&(flg[0]==0))
	{
        *pc+= 2*valor;
    }
    else
            {
        *pc+=2;
    }
}
void BLS( uint32_t valor, int *pc, bool *flg)
{
    obtenerBandera(flg);
    if((flg[1]==0)&&(flg[0]==1))
	{
        *pc+= 2*valor;
    }
    else
	{
        *pc+=2;
    }
}
void BGE( uint32_t valor, int *pc, bool *flg)
{
    obtenerBandera(flg);
    if(flg[2]==flg[2])
	{
        *pc+= 2*valor;     }
    else
            {
        *pc+=2;
    }
}
void BLT( uint32_t valor, int *pc, bool *flg)
{
    obtenerBandera(flg);
    if(flg[2]!=flg[2])
	{
        *pc+= 2*valor;
    }
    else
	{
        *pc+=2;   }
}
void BGT( uint32_t valor, int *pc, bool *flg)
{
    obtenerBandera(flg);
        if(flg[0]==0)
	{
        *pc+= 2*valor;
    }
    else
	{
        *pc+=2;
    }
}
void BLE( uint32_t valor, int *pc, bool *flg)
{
    obtenerBandera(flg);
    if((flg[0]==0)&&(flg[2]==flg[3]))
	{
        *pc+= 2*valor;
    }
    else
            {
        *pc+=2;
    }
}
}
