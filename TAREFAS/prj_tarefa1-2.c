#include <stdlib.h>
#include <stdio.h>

/*2)Faça um programa que receba três notas, calcule e mostre a média aritmética entre elas. */

int main(void)
{

    void calcularemediaaritmetica();
    {
        int numero;
        int soma = 0;

        printf("Digite 3 numeros inteiros: \n");
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &numero);
            soma += numero;
        }

        double media = soma / 3;
        printf("A soma é: %d\n", soma);
        printf("A média é: %.2lf\n", media);
    }
}