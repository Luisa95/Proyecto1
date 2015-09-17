#include "decoder.h"
#include "alu.h"
#include "InstruccionesDesplazamiento.h"

/**
typedef struct
{
	char mnemonic[10];
	char op1_type; // reconoce una r o un #
	char op2_type;
	char op3_type;
	uint32_t op1_value; guarda el numero del registro o el valor del inmediato
	uint32_t op2_value;
	uint32_t op3_value;
}instruction_t;
**/

void decodeInstruction(instruction_t instruction,uint32_t* Rd[], uint32_t* Rm[], uint32_t* Rr[])// recibe el retorno de getInstruccion
{
/**	if( strcmp(instruction.mnemonic,"ADC") == 0 )
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
//	    ADC();
	    } else

	if( strcmp(instruction.mnemonic,"ADD") == 0)
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
	    ADD(Rd[]);
	    /** Los parametros de entrada a la funcion deben ser tipo op1~2~3_type con valor (posición del registro) op1~2~3_value**/
	/**    } else
	if( strcmp(instruction.mnemonic,"AND") == 0
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
	    AND());
	    } else
	 if( strcmp(instruction.mnemonic,"ARS") == 0 )
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
	    ARS());
	    } else
     if( strcmp(instruction.mnemonic,"BIC") == 0 )
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
	    BIC();
	    } else
	 if( strcmp(instruction.mnemonic,"CMN") == 0)
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
	    CMN());
	    } else
	 if( strcmp(instruction.mnemonic,"CMP") == 0 )
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
	    CMP());
	    } else
	 if( strcmp(instruction.mnemonic,"EOR") == 0)
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
	    EOR();
	    } else
	 if( strcmp(instruction.mnemonic,"LSL") == 0 )
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
	    LSL();
	    } else
     if( strcmp(instruction.mnemonic,"LSR") == 0)
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
	    LSR();
	    } else
	 if( strcmp(instruction.mnemonic,"MOV") == 0)
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
	    MOV();
	    } else
	 if( strcmp(instruction.mnemonic,"MUL") == 0)
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
	    MUL();
	    } else
     if( strcmp(instruction.mnemonic,"MVN") == 0)
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
	    MVN();
	    } else
	 if( strcmp(instruction.mnemonic,"NOP") == 0 )
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
	    NOP();
	    } else
     if( strcmp(instruction.mnemonic,"ORR") == 0)
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
	    ORR();
	    } else
	 if( strcmp(instruction.mnemonic,"REV") == 0 )
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
	    REV();
	    } else
     if( strcmp(instruction.mnemonic,"REV16") == 0 )
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
	    REV16();
	    } else
	 if( strcmp(instruction.mnemonic,"REVSH") == 0 )
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
	    REVSH();
	    } else
	 if( strcmp(instruction.mnemonic,"ROR") == 0 )
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
	    ROR();
	    } else
	 if( strcmp(instruction.mnemonic,"RSB") == 0 )
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
	    RSBS();
	    } else
	 if( strcmp(instruction.mnemonic,"SBC") == 0 )
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
	    SBC();
	    } else
	 if( strcmp(instruction.mnemonic,"SUB") == 0 )
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
	    SUB();
	    } else
	 if( strcmp(instruction.mnemonic,"TST") == 0)
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
	    TST();
	    } else


}
**/

instruction_t getInstruction(char* instStr)
{
	instruction_t instruction;
	char* split = (char*)malloc(strlen(instStr));
	int num=0;

	strcpy(split, instStr);
	/* Obtiene el mnemonico de la instrucción */
	split = strtok(split, " ,");
	strcpy(instruction.mnemonic, split); // obtiene la instruccion

	/* Separa los operandos */
	while (split != NULL)
	{
		switch(num)  // obtiene los tres registros de la instruccion, nombre y numero: Rd5
		{
			case 1:
				instruction.op1_type  = split[0];
				instruction.op1_value = (uint32_t)strtol(split+1, NULL, 0);
				break;

			case 2:
				instruction.op2_type  = split[0];
				instruction.op2_value = (uint32_t)strtol(split+1, NULL, 0);
				break;

			case 3:
				instruction.op3_type  = split[0];
				instruction.op3_value = (uint32_t)strtol(split+1, NULL, 0);
				break;
		}

		split = strtok(NULL, " ,."); // en el txt las instrucciones deben finalizar con "."
		num++;
	}

	if(num==3){
		instruction.op3_type  = 'N';
		instruction.op3_value = 0;
	}

	free(split);

	return instruction;
}

int readFile(char* filename, ins_t* instructions) // lee todo el archivo
{
	FILE* fp;	/* Puntero a un archivo  */
	int lines;	/* Cantidad de líneas del archivo */
	int line=0;	/* Línea leida */
	char buffer[50]; /* Almacena la cadena leida */

	fp = fopen(filename, "r");	/* Abrir el archivo como solo lectura */
	if( fp==NULL )
		return -1;	/* Error al abrir el archivo */

	lines = countLines(fp)-1;	/* Cantidad de líneas*/

	/* Asignación dinámica de memoria para cada instrucción */
	instructions->array = (char**)malloc(lines*sizeof(char*));
	while ( fgets(buffer, 50, fp) != NULL && line<lines ){
        instructions->array[line] = (char*)malloc(strlen(buffer)*sizeof(char));
		strcpy(instructions->array[line], buffer);
		line++;
 	}

	fclose(fp);	/* Cierra el archivo */

	return lines;
}


int countLines(FILE* fp) // numero de lineas del  txt, necesario para comparar y leer todo el archivo
{
	int lines=0;
	int ch;

	while(!feof(fp))
	{
	  ch = fgetc(fp);
	  if(ch == '\n')
		lines++;
	}
	rewind(fp);

	return lines;
}


}
