#include <stdlib.h>
#include <stdio.h>

/*4) Faça um programa que receba o valor de variavel Raio e calcule o perimetro e a area.*/
// area de uma circunferencia = pi * raio ao quadrado
// perimetro da circunferencia = 2 * pi * raio

int main(void)
{

    void calculeoperimetroearea();
    {

        double raio, perimetro, area;
        const double PI = 3.14;

        printf("Digite o raio da circunferencia:\n", raio);
        scanf("%lf", &raio);

        area = PI * raio * raio;
        printf("A area da circunferencia é: %.2lf\n", area);

        perimetro = 2 * PI * raio;
        printf("O perimetro da circunferencia é: %.2lf\n", perimetro);
    }
}