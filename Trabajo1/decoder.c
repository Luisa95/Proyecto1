#include "decoder.h"
#include "alu.h"
#include"banderas.h"
#include "InstruccionesDesplazamiento.h"
/*
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
*/
void decodeInstruction(instruction_t instruction,uint32_t* Rd, uint32_t* Rm, uint32_t* Rr, int *flg)// recibe el retorno de getInstruccion
{    uint32_t cero=0;
	if( strcmp(instruction.mnemonic,"ADC") == 0 )
        {

	    } else

	if( strcmp(instruction.mnemonic,"ADD") == 0)
        {
            if((instruction.op1_type=='R')&&(instruction.op2_type=='R')&&(instruction.op3_type=='R'))
		{
            ADD(&Rd[instruction.op1_value],&Rm[instruction.op2_value],&Rr[instruction.op3_value],&flg[0]);
        }else if((instruction.op1_type=='R')&&(instruction.op2_type=='R')&&(instruction.op3_type=='#'))
           ADD(&Rd[instruction.op1_value],&Rm[instruction.op2_value],&instruction.op3_value,&flg[0]);
        }else

	    if( strcmp(instruction.mnemonic,"AND") == 0)
        {
        if((instruction.op1_type=='R')&&(instruction.op2_type=='R')&&(instruction.op3_type=='R'))
		{
           AND(&Rd[instruction.op1_value],&Rm[instruction.op2_value],&Rr[instruction.op3_value],&flg[0]);
        }else if((instruction.op1_type=='R')&&(instruction.op2_type=='R')&&(instruction.op3_type=='#'))
           AND(&Rd[instruction.op1_value],&Rm[instruction.op2_value],&instruction.op3_value,&flg[0]);

	    } else
	 if( strcmp(instruction.mnemonic,"ASRS") == 0 )
        {
		if((instruction.op1_type=='R')&&(instruction.op2_type=='R'))
		{
           ASRS(&Rd[instruction.op1_value],&Rm[instruction.op2_value]);
        }else if((instruction.op1_type=='R')&&(instruction.op2_type=='#'))
           ASRS(&Rd[instruction.op1_value],&instruction.op2_value);
        } else
     if( strcmp(instruction.mnemonic,"BIC") == 0 )
        {
		if((instruction.op1_type=='R')&&(instruction.op2_type=='R'))
		{
           BIC(&Rd[instruction.op1_value],&Rm[instruction.op2_value]);
        }else if((instruction.op1_type=='R')&&(instruction.op2_type=='#'))
           BIC(&Rd[instruction.op1_value],&instruction.op2_value);
        } else
	 if( strcmp(instruction.mnemonic,"CMN") == 0)
        {
		if((instruction.op1_type=='R')&&(instruction.op2_type=='R')&&(instruction.op3_type=='R'))
		{
        CMN(&Rd[instruction.op1_value],&Rm[instruction.op2_value],&Rr[instruction.op3_value]);
        }else if((instruction.op1_type=='R')&&(instruction.op2_type=='R')&&(instruction.op3_type=='#'))
        CMN(&Rd[instruction.op1_value],&Rm[instruction.op2_value],&instruction.op3_value);
        } else
	 if( strcmp(instruction.mnemonic,"CMP") == 0 )
        {
		if((instruction.op1_type=='R')&&(instruction.op2_type=='R')&&(instruction.op3_type=='R'))
		{
        CMP(&Rd[instruction.op1_value],&Rm[instruction.op2_value],&Rr[instruction.op3_value]);
        }else if((instruction.op1_type=='R')&&(instruction.op2_type=='R')&&(instruction.op3_type=='#'))
        CMP(&Rd[instruction.op1_value],&Rm[instruction.op2_value],&instruction.op3_value);
		} else
	 if( strcmp(instruction.mnemonic,"EOR") == 0)
        {if((instruction.op1_type=='R')&&(instruction.op2_type=='R')&&(instruction.op3_type=='R'))
		{
           EOR(&Rd[instruction.op1_value],&Rm[instruction.op2_value],&Rr[instruction.op3_value],&flg[0]);
        }else if((instruction.op1_type=='R')&&(instruction.op2_type=='R')&&(instruction.op3_type=='#'))
           EOR(&Rd[instruction.op1_value],&Rm[instruction.op2_value],&instruction.op3_value,&flg[0]);
		} else
	 if( strcmp(instruction.mnemonic,"LSL") == 0 )
        {if((instruction.op1_type=='R')&&(instruction.op2_type=='R')&&(instruction.op3_type=='R'))
		{
         LSL(&Rd[instruction.op1_value],&Rm[instruction.op2_value],instruction.op3_value);
        }else if((instruction.op1_type=='R')&&(instruction.op2_type=='R')&&(instruction.op3_type=='#'))
         LSL(&Rd[instruction.op1_value],&Rm[instruction.op2_value],cero);

	    } else
     if( strcmp(instruction.mnemonic,"LSR") == 0)
        {
        {if((instruction.op1_type=='R')&&(instruction.op2_type=='R')&&(instruction.op3_type=='R'))
		{
         LSR(&Rd[instruction.op1_value],&Rm[instruction.op2_value],cero);
        }else if((instruction.op1_type=='R')&&(instruction.op2_type=='R')&&(instruction.op3_type=='#'))
         LSR(&Rd[instruction.op1_value],&Rm[instruction.op2_value],instruction.op3_value);
        }
        } else
	 if( strcmp(instruction.mnemonic,"MOV") == 0)
        {
          if((instruction.op1_type=='R')&&(instruction.op2_type=='R'))
		{
         MOV(&Rd[instruction.op1_value],&Rm[instruction.op2_value],&flg[0]);
        }else if((instruction.op1_type=='R')&&(instruction.op2_type=='#'))
         LSL(&Rd[instruction.op1_value],&instruction.op2_value,&flg[0]);
	    } else
	 if( strcmp(instruction.mnemonic,"MUL") == 0)
        {

        if((instruction.op1_type=='R')&&(instruction.op2_type=='R')&&(instruction.op3_type=='R'))
		{
           MUL(&Rd[instruction.op1_value],&Rm[instruction.op2_value],&Rr[instruction.op3_value],&flg[0]);
        }else if((instruction.op1_type=='R')&&(instruction.op2_type=='R')&&(instruction.op3_type=='#'))
           AND(&Rd[instruction.op1_value],&Rm[instruction.op2_value],&instruction.op3_value,&flg[0]);

	    } else
     if(strcmp(instruction.mnemonic,"MVN") == 0)
        {
        if((instruction.op1_type=='R')&&(instruction.op2_type=='R'))
		{
         MVN(&Rd[instruction.op1_value],&Rm[instruction.op2_value]);
        /* solo opera registros
        }else if((instruction.op1_type=='R')&&(instruction.op2_type=='#'))
         LSL(&Rd[instruction.op1_value],&instruction.op2_value);
	    }
	    */
	    }
	    } else
	 if(strcmp(instruction.mnemonic,"NOP") == 0 )
        {
		NOP();
	    }
	    else
     if(strcmp(instruction.mnemonic,"OR") == 0)
        {
        if((instruction.op1_type=='R')&&(instruction.op2_type=='R')&&(instruction.op3_type=='R'))
		{
        OR(&Rd[instruction.op1_value],&Rm[instruction.op2_value],&Rr[instruction.op3_value],&flg[0]);
        }else
        if((instruction.op1_type=='R')&&(instruction.op2_type=='R')&&(instruction.op3_type=='#'))
        OR(&Rd[instruction.op1_value],&Rm[instruction.op2_value],&instruction.op3_value,&flg[0]);
	    } else

	 if( strcmp(instruction.mnemonic,"REV") == 0 )  //1
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos

	    } else
     if( strcmp(instruction.mnemonic,"REV16") == 0 ) //2
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos

	    } else
	 if( strcmp(instruction.mnemonic,"REVSH") == 0 )//3
        {
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos

	    } else

	 if( strcmp(instruction.mnemonic,"ROR") == 0 )
        {
		if((instruction.op1_type=='R')&&(instruction.op2_type=='R'))
		{
        ROR(&Rd[instruction.op1_value],&Rm[instruction.op2_value]);

        /*      SOLO OPERA REGISTROS
        }else
        if((instruction.op1_type=='R')&&(instruction.op2_type=='#'))
        ADD(&Rd[instruction.op1_value],&instruction.op2_value);
	    */
	    } else
	 if( strcmp(instruction.mnemonic,"RSBS") == 0 )
        {
         if((instruction.op1_type=='R')&&(instruction.op2_type=='R'))
		{
        RSBS(&Rd[instruction.op1_value],&Rm[instruction.op2_value]);
        }else
        if((instruction.op1_type=='R')&&instruction.op2_type=='#')
        RSBS(&Rd[instruction.op1_value],&instruction.op2_value);
	    } else
	 if( strcmp(instruction.mnemonic,"SBC") == 0 ) //4
        {
	    } else
	 if( strcmp(instruction.mnemonic,"SUB") == 0 )
        {
        if((instruction.op1_type=='R')&&(instruction.op2_type=='R')&&(instruction.op3_type=='R'))
		{
         SUB(&Rd[instruction.op1_value],&Rm[instruction.op2_value],&Rr[instruction.op3_value],&flg[0]);
        }else if((instruction.op1_type=='R')&&(instruction.op2_type=='R')&&(instruction.op3_type=='#'))
         SUB(&Rd[instruction.op1_value],&Rm[instruction.op2_value],&instruction.op3_value,&flg[0]);
	    } else
	 if( strcmp(instruction.mnemonic,"TST") == 0) //5
        {
	    }
}
}




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
