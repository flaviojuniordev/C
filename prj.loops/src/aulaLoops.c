/*
 ============================================================================
 Name        : aula2-06do3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x, y, result, cont;
	cont = 1;

	while (cont <= 3) {
		printf("Entre com os dois números para serem somados:");
		fflush(stdout);
		scanf("%d %d", &x, &y);

		result = x + y;

		printf("O resultado da soma é: %d \n", result);

		cont = cont + 1;
	}
	for (cont = 1; cont <= 3; cont++) {
		printf("Entre com os dois números para serem somados: ");
		fflush(stdout);
		scanf("%d %d", &x, &y);

		result = x + y;

		printf("O número da soma é: %d \n", result);
	}
	cont = 1;
	do {
		printf("Entre com os dois números para serem somados\n");
		fflush(stdout);
		scanf("%d, %d", &x, &y);

		result = x + y;
		printf("O valor da soma é: %d \n ", result);
		cont++;
	} while (cont <= 3);

	return 0;
}
