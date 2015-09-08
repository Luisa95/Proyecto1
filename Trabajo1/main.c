#include <stdio.h>
#include <stdlib.h>
#include <curses.h>


int main(void)
{
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

	move(1, 30);	/* Mueve el cursor a la posición y=2, x=34*/
	printw("EMULADOR CORTEX-M0");
	refresh();	/* Imprime en la pantalla
					Sin esto el printw no es mostrado */

    init_pair(2, COLOR_CYAN, COLOR_BLACK);
    attron(COLOR_PAIR(2));
    mvprintw(4,2,"Rd: ");
    mvprintw(5,2,"Rm: ");
    mvprintw(6,2,"Rn: ");

    init_pair(3, COLOR_MAGENTA, COLOR_BLACK);
    attron(COLOR_PAIR(3));
    mvprintw(5,20,"OPERACION : ");
    mvprintw(6,20,"INSTRUCCION DE DESPLAZAMIENTO: ");

    init_pair(4, COLOR_YELLOW, COLOR_BLACK);
    attron(COLOR_PAIR(4));
    mvprintw(10,2,"BANDERAS: ");

    init_pair(5, COLOR_WHITE, COLOR_BLACK);
    attron(COLOR_PAIR(5));
    mvprintw(12,2,"Zero: ");
    mvprintw(12,20,"Negativa: ");
    mvprintw(13,2,"Acarreo: ");
	mvprintw(13,20,"Sobreflujo: ");
	attroff(COLOR_PAIR(1));	/* DEshabilita los colores Pair 1 */

	getch();	/* Espera entrada del usuario */
	endwin();	/* Finaliza el modo curses */

	return 0;
}
