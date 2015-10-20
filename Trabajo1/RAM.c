#include <stdint.h>
#include "RAM.h"
#include <stdio.h>

uint8_t bitcount(uint8_t listaregistros[])
{
    uint8_t i, counter=0;
    for(i=0;i<=15;i++)
{
    if (listaregistros[i]!=0)
        counter++;
}
return counter;
}

void push(uint8_t *pila, uint32_t *R, uint8_t *ram, uint8_t listaregistros[])
{
    uint8_t address;
    uint32_t i=0;
    uint8_t k;
    k=bitcount((listaregistros));
    address=*pila+(4*(h)); // la direccion cambia con 4 bits
    for(i=0;i<=15;i++)
    {
        if(listaregistros[i]==1)
       {
           ram[address]=R[i];
       }
      address=address+4;
    }
    pila=pila-4*(bitcount(listaregistros));
}

void pop(uint8_t *pila, uint32_t *R, uint8_t *ram, uint8_t listaregistros[])
{
uint8_t address,H;
int i;
H=bitcount(listaregistros);
address=*pila-(4*H);
for(i=15;i<=0;i--)
{
    if(listaregistros[i]==1)
    {
        R[i]=ram[addres];
    }

}
pila=pila+(4*bitcount(listaregistros))

}
