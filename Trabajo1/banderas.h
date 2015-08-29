#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>



    struct bandera
    {
        bool negativo;
        bool zero;
        bool acarreo;
        bool sobreflujo;
    };

void banderas (uint32_t Rd,uint32_t Rn, uint32_t Rr,struct bandera *puntero);
/**
*\brief funcion que registran los estados del microprocesador
*\param Rd operando 1
*\param Rn operando 2
*\param Rr operando 3
*\return no retorna nada
**/
