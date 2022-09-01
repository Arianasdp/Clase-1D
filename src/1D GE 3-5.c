/*
 ============================================================================
 Name        : 1D.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*
 Ejercicio 3-5: Realizar un programa en donde se puedan utilizar los prototipos de la
función Restar en sus 4 combinaciones.
 int Restar1(int, int);
 int Restar2(void);
 void Restar3(int, int);
 void Restar4(void);
 */

int Restar1(int, int);
int Restar2(void);
void Restar3(int, int);
void Restar4(void);

int main(void) {
	setbuf(stdout, NULL);
//ejemplo
	/*int resultado = 0;

	resultado = Sumar2();

	printf("El resultado da: %d", resultado);*/

	Restar4();

	return EXIT_SUCCESS;
}

int Restar1(int unNumero, int otroNumero)
{
	int resultado;

	resultado = unNumero - otroNumero;

	return resultado;
}

int Restar2(void)
{
	int numeroUno = 0;
	int numeroDos = 0;
	int resultado;

	printf("Ingrese un numero: ");
	scanf("%d", &numeroUno);

	printf("Ingrese otro numero: ");
	scanf("%d", &numeroDos);

	resultado = numeroUno - numeroDos;

	return resultado;
}

void Restar3(int unNumero, int otroNumero)
{
	int resultado;

	resultado = unNumero - otroNumero;

	printf("El resultado es: %d", resultado);
}

void Restar4(void)
{
	int numeroUno = 0;
	int numeroDos = 0;
	int resultado;

	printf("Ingrese un numero: ");
	scanf("%d", &numeroUno);

	printf("Ingrese otro numero: ");
	scanf("%d", &numeroDos);

	resultado = numeroUno - numeroDos;

	printf("El resultado es: %d", resultado);

}
