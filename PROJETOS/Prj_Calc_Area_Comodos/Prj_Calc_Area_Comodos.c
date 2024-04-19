#include <stdio.h>
#include <stdlib.h>

/*3) Escreva um programa que calcule a área de 4 comodos de uma casa. O programa devera ler a largura e o comprimento de cada comodo, calcular e mostrar a area de cada um.*/

int main(void)
{

    void calcularareadoscomodos();
    {
        double largura, comprimento, area, areatotal;

        for (int i = 1; i <= 4; i++)
        {
            printf("Digite a largura do %d cômodo: \n", i);
            scanf("%lf", &largura);
            printf("Digite o comprimento do %d cômodo: \n", i);
            scanf("%lf", &comprimento);

            area = comprimento * largura;
            areatotal += area;

            printf("A area do cômodo %d é: %2.lf \n", i, area);
            printf("A area total dos cômodos é: %2.lf \n", areatotal);
        }
    }
}
