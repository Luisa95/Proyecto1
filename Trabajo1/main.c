#include "registros.h"
#include "decoder.h"
#include <curses.h>

int main(void)
{

int j,*pc;

	initscr();		/* Inicia modo curses */
	curs_set(0);	/* Cursor Invisible */
	raw();			/* Activa modo raw */
	keypad(stdscr, TRUE);	/* Obtener F1, F2, etc */
	noecho();		/* No imprimir los caracteres leidos */
	start_color();	/* Permite manejar colores */
    init_pair(1, COLOR_GREEN, COLOR_BLACK);	/* Pair 1 -> Texto blanco
										   fondo Negro */
	border( ACS_VLINE, ACS_VLINE,
			ACS_HLINE, ACS_HLINE,
            ACS_ULCORNER, ACS_URCORNER,
			ACS_LLCORNER, ACS_LRCORNER	);

	attron(COLOR_PAIR(1));	/* Activa el color verde para el

                              texto y negro para el fondo Pair 1*/

/* se definen los registros como vectores (punteros constantees) en el main,
y usando e paso por referencia se envia la posicion deseada *a la función requerida*/

  uint32_t Rd[12], Rm[12], Rr[12];
  bool flg[4];
  Registros(Rd,Rm,Rr);/* Solo una vez para dar valores iniciales*/

	move(1, 30);	/* Mueve el cursor a la posición y=2, x=30*/
	printw("EMULADOR CORTEX-M0");
	refresh();	/* Imprime en la pantalla
				Sin esto el printw no es mostrado */


while (1)
{
for(j=0;j<12;j++)
{
    init_pair(2, COLOR_CYAN, COLOR_BLACK);
    attron(COLOR_PAIR(2));
    mvprintw(3,2,"El valor actual de los registros es ");
    mvprintw(4+j,2,"Rd[%d]:  %d  Rm[%d]:  %d  Rr[%d]:  %d ",j,*(Rd+j), j,*(Rm+j),j, *(Rr+j));
    getch();
}

         /*llama al decodificador*/
      //------- No modificar ------//
         int i, num_instructions;
		ins_t read;
		char** instructions;
		instruction_t instruction;

		num_instructions = readFile("code.txt", &read);
		if(num_instructions==-1)
			return 0;

		if(read.array==NULL)
			return 0;

		instructions = read.array; /*Arreglo con las instrucciones*/
	//---------------------------//
getch();

    instruction=getInstruction(instructions);
    decodeInstruction(instruction,Rd,Rm,Rr,flg,&pc);
      /*-------------------------------------*/
    init_pair(3, COLOR_MAGENTA, COLOR_BLACK);
    attron(COLOR_PAIR(3));
    mvprintw(18,30,"OPERACION : ");
    mvprintw(20,30,"INSTRUCCION DE DESPLAZAMIENTO: ");

    init_pair(4, COLOR_YELLOW, COLOR_BLACK);
    attron(COLOR_PAIR(4));
    mvprintw(18,2,"BANDERAS: ");

    init_pair(5, COLOR_WHITE, COLOR_BLACK);
    attron(COLOR_PAIR(5));
    mvprintw(20,2,"Zero: %d",flg[0]);
    mvprintw(21,2,"Negativa: %d",flg[1]);
    mvprintw(22,2,"Acarreo: %d",flg[2]);
	mvprintw(23,2,"Sobreflujo: %d",flg[3]);

    mvprintw(23,30,"PC: %d",*pc);
	attroff(COLOR_PAIR(1));	/* DEshabilita los colores Pair 1 */

	getch();	/* Espera entrada del usuario */
    endwin();	/* Finaliza el modo curses */
}return 0;
}
