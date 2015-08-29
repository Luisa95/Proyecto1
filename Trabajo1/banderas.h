#include<stdio>
#include<stdint.h>
#include<stdbool.h>



    struct bandera 
    {
        bool negativo;
        bool zero;
        bool acarreo;
        bool sobreflujo;
    };

void banderas (uint32_t rx,uint32_t Rd, uint32_t Rr,struct bandera *puntero);