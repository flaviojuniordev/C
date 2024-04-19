#include <stdio.h>
#include <stdlib.h>

/*2) Faça um programa que leia 10 numeros inteiros e calcule e mostre ao final a soma e a média.*/

int main(void)
{

    void calcularSomaeMedia();
    {

        int numeros;
        int soma = 0;

        printf("Digite 10 numeros inteiros:\n");
        fflush(stdout);
        for (int i = 0; i < 10; i++)
        {
            scanf("%d", &numeros);
            soma += numeros;
        }

        double media = soma / 10;
        printf("Soma: %d \n", soma);
        printf("Media: %2.f \n", media);
    }
}
