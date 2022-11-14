/*
 ============================================================================
 Name        : 22.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	int id;
	char nombre[20];
	int infectados;
	int recuperados;
	int muertos;
}ePais;

//int actualizarRecuperados(ePais nombre[], ePais recuperados);
char ordenarCaracteres(char cadena[]);
void invertirCadena(char cadena[]);

int main(void)
{
	setbuf(stdout, NULL);

	char cadena[20] = "UTN-FRA";
	char cadena2[20] = "algoritmo";

	//actualizarRecuperados("Argentina", 12345);

	ordenarCaracteres(cadena2);

	invertirCadena(cadena);

	printf("%s", cadena);

	return EXIT_SUCCESS;
}
/*
int actualizarRecuperados(ePais nombre[], ePais recuperados)
{
	int todoBien = 0;

	int acumuladorRecuperados = 0;

	acumuladorRecuperados;

	return todoBien;
}
*/
char ordenarCaracteres(char cadena[])
{
	char auxCad;

	if(cadena != NULL)
	{
		for(int i = 0; i < strlen(cadena) - 1; i++)
		{
			for(int j = i + 1; j < strlen(cadena); j++)
			{
				if(strcmp(cadena[i], cadena[j] > 0))
				{
					auxCad = cadena[i];
					cadena[i] = cadena[j];
					cadena[j] = auxCad;
				}
			}
		}
	}

	return cadena;
}

void invertirCadena(char cadena[])
{
	char auxCad;
	for(int i = 0; i < strlen(cadena) / 2; i++ )
	{
		auxCad = cadena[i];
		cadena[i] = cadena[strlen(cadena) - i - 1];
		cadena[strlen(cadena) - i - 1] = auxCad;
	}
}
