/*
 ============================================================================
 Name        : prj_recursivo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//função recursiva em uma linha utilizando o oporador ternário
int fatorialRecursivoUmaLinha(int c){
	return (c == 0 || c== 1) ? 1 : (c * fatorialRecursivoUmaLinha(c-1));
}
//função recursiva padrão
int fatorialRecursivo(int n){
	//Caso base
	if (n==0 || n==1) {
		return 1;
	}else {
		//chamada recursiva
		return n * fatorialRecursivo(n-1);
	}
}
//Solução iterativa
int fatorialComLoop(int n){
	int resultado = 1;
	//Utilizando um loop for para multiplicar os números de 1 a n
	for (int i = 1; i<= n; i++) {
		resultado *= 1;
	}
	return resultado;
}
int main(void){
	int numero =5;
	printf("O fatorial de %d é: %d\n", numero, fatorialRecursivo(numero)); //chamada a solução recursiva
	return 0;
}


