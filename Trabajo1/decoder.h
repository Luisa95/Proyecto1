#ifndef _DECODER_H_
#define	_DECODER_H_
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

typedef struct
{
   char** array;

}ins_t;

typedef struct
{
	char mnemonic[10];
	char op1_type;
	char op2_type;
	char op3_type;
	uint32_t op1_value;
	uint32_t op2_value;
	uint32_t op3_value;
}instruction_t;

/** \fn void decodeInstruction(instruction_t instruction)
    \brief Decodifica la instruccion y la ejecuta.
    \param instruction instruccion a decodificar y ejecutar.
*/
void decodeInstruction(instruction_t instruction, uint32_t* Rd[], uint32_t* Rm[], uint32_t* Rr[]);

/** \fn instruction_t getInstruction(char* instStr)
    \brief Obtiene la instruccion separada por partes.
    \param instrStr cadena que contiene la instruccion.
	\return instruction_t la instruccion separada por partes.
*/
instruction_t getInstruction(char* instStr);

/** \fn int readFile(char** instructions)
    \brief Lee instrucciones de un archivo.
    \param filename Nombre del archivo.
    \param instructions estructura con arreglo con las instrucciones leidas.
	\return Entero indicando la cantidad de lineas.
*/
int readFile(char* filename, ins_t* instructions);

/** \fn int countLines(FILE fp)
    \brief Cuenta la cantidad de lineas de un archivo.
    \param fp Puntero al archivo.
	\return Entero con la cantidad de lineas del archivo.
*/
int countLines(FILE* fp);

#endif /*_DECODER_H_*/
