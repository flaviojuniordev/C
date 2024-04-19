/*
 ============================================================================
 Name        : prj_variaveis.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main(void) {
	int idade = 26;
	const int MAX_NUM = 100;

	printf ("Minha variavel int comum = %d\n\n", idade);
	printf ("Minha variavel int constante = %d\n\n", MAX_NUM);
	printf ("Minha constante = %f\n", PI);

	//MAX-NUM = 99;

	return EXIT_SUCCESS;
}
