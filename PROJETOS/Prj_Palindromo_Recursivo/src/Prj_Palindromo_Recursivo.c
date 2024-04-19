/*
 ============================================================================
 Name        : prj_palindromo_recursivo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindromorecursivo(char str[], int left, int right){
		return (left >= right) ? 1 : (str[left] == str[right]) && palindromorecursivo(str, left + 1, left - 1);
	}

int main(void) {
	char palavra[100];
	printf("Digite uma palavra:");
	fflush(stdout);
	scanf("%s", palavra);

	int tamanho = strlen(palavra);
	printf ("%d", tamanho);
	//verificar se é um palindromo
	if (palindromorecursivo (palavra ,0, tamanho - 1)){
		printf("A palavra é um palindromo.");
	}else{
		printf("A palavra não é um palindromo.");
	}
	return 0;
}
