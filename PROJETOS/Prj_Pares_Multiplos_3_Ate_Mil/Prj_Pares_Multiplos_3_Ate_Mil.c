#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que mostre os numeros pares multiplos de 3, positivos até o numero 1000.*/

int main(void)
{
    int cont = 0;
    printf("Números pares múltiplos de 3 até 1000:\n");
    for (int i = 2; i <= 1000; i += 2)
    {
        if (i % 3 == 0)
        {
            printf("%d ", i);
            cont++;
        }
    }
    printf("\nTotal de números pares múltiplos de 3: %d\n\n", cont);
}