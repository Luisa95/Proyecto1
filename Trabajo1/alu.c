#include "alu.h"
#include <curses.h>

void ADD(uint32_t *Ra,uint32_t Rb, uint32_t Rc, bool flg[], int*pc)
{

    *Ra=(Rb)+(Rc);       //suma 2 registros  // si la funcions recibe solo dos parametros, repetir en el llamamiento el priemr registro
    *pc=*pc+2;
    banderas (*Ra,Rb,Rc,&flg[0]);

 mvprintw(15,30,"RESULTADO ADD: %d",*Ra);
}

void SUB(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc, bool*flg, int*pc)
{

    *Ra=*(Rb)-*(Rc);
    *pc=*pc+2;
     banderas (*Ra,*Rb,*Rc,&flg[0]);

}

void MUL (uint32_t *Ra, uint32_t *Rb,uint32_t *Rc, bool*flg, int*pc)
{

    *Ra=(*Rb)*(*Rc);
    *pc=*pc+2;     //Multiplica 2 registros
    banderas (*Ra,*Rb,*Rc,&flg[0]);

}

void AND(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc, bool*flg, int*pc)
{

    *Ra=(*Rb)&(*Rc);
    *pc=*pc+2;
     banderas (*Ra,*Rb,*Rc,&flg[0]);

}

void OR(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc, bool*flg, int*pc)
{

    *Ra=(*Rb)|(*Rc);
    *pc=*pc+2;
     banderas (*Ra,*Rb,*Rc,&flg[0]);

}

void EOR(uint32_t *Ra,uint32_t *Rb, uint32_t *Rc, bool*flg, int*pc)
{

    *Ra=(*Rb)^(*Rc);
    *pc=*pc+2;
     banderas (*Ra,*Rb,*Rc,&flg[0]);

};

void MOV(uint32_t *Ra,uint32_t *Rb, bool*flg, int*pc)
{
    *Ra=*Rb;
    *pc=*pc+2;
     banderas(*Ra,*Rb,*Rb,&flg[0]);
};
