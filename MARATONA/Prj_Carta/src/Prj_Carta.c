/*
 ============================================================================
 Name        : Prj_Cartas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int cartas[5];
	char sequencia;

	for(int i = 0; i < 5; i++){
		printf("Digite a carta escolhida: ");
		fflush(stdout);
		scanf("%d", &cartas[i]);

		if(cartas[i] > 13){
			printf("Numero de carta Invalido!");
		}
	}

	for(int j = 0; j < 5; j++){
		if(cartas[j] > cartas[j+1]){
		sequencia = 'C';

		}else if(cartas[j] < cartas[j+1]){
			sequencia = 'D';
		}else{
			sequencia = 'N';
		}
	}

	 printf("%c", sequencia);

	return 0;
}
