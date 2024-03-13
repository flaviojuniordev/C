
#include <stdio.h>
#include <stdlib.h>

/*1) faça um programa que receba quatro numeros inteiros, calcule e mostre a soma desses numeros.*/


	//método1
	int calcularSoma(int num1 ,int num2 ,int num3 ,int num4){
	return num1 + num2 + num3 + num4;
}

	int main(void){
		int resultadoSoma = calcularSoma(2,3,5,7);
		printf("A soma dos números é: %d\n", resultadoSoma);
}

//metodo 2
