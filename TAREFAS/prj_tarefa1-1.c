#include <stdio.h>
#include <stdlib.h>

/*1)Faça um programa que receba quatro numeros inteiros, calcule e mostre a soma desses números.*/

int main(void)
{
    int soma, A, B, C, D;
    printf("Digite o primeiro valor: \n");
    scanf("%d", &A);
    printf("Digite o segundo valor: \n");
    scanf("%d", &B);
    printf("Digite o terceiro valor: \n");
    scanf("%d", &C);
    printf("Digite o quarto valor: \n");
    scanf("%d", &D);
    soma = A + B + C + D;

    printf("Resultado da soma é: \n");
    printf("%d.\n", soma);
}
