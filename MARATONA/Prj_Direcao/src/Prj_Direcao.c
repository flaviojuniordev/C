/*
 ============================================================================
 Name        : Prj_Direcao.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char A; //direcao amigo
	char B; //direcao oasis

	printf("Digite a direção do amigo (use N para norte, S para sul, L para leste e O para oeste)\n");
	scanf(" %c", &A);
	printf("Digite a direção do oasis (use N para norte, S para sul, L para leste e O para oeste)\n");
	scanf(" %c", &B);


	//direcao amigo norte
	if(A == 'N' && B == 'L'){
		printf("90");
	}else if(A == 'N' && B == 'O'){
		printf("90");
	}else if(A == 'N' && B == 'S'){
		printf("180");
	}

	//direcao amigo sul
	if(A == 'S' && B == 'L'){
		printf("90");
	}else if(A == 'S' && B == 'O'){
		printf("90");
	}else if(A == 'S' && B == 'N'){
		printf("180");
	}

	//direcao amigo leste
	if(A == 'L' && B == 'N'){
		printf("90");
	}else if(A == 'L' && B == 'S'){
		printf("90");
	}else if(A == 'L' && B == 'O'){
		printf("180");
	}

	//direcao amigo oeste
	if(A == 'O' && B == 'N'){
		printf("90");
	}else if(A == 'O' && B == 'S'){
		printf("90");
	}else if(A == 'O' && B == 'L'){
		printf("180");
	}

	if(A == B){
		printf("0");
	}

	return 0;
}
