#include <stdlib.h>
#include <stdio.h>

/*5) faça um programa que receba o salario base de um funcionario, e calcule e mostre o salario a receber, sabendo se que o funcionario tem gratificaçao de 5% sobre o salario base e paga iumposto de 7% sobre este salario*/

int main(void)
{

    float sal, sal_final, grat5, imposto7;
    printf("Insira o salario base: \n");
    scanf("%f", &sal);
    grat5 = sal * 0.05;
    imposto7 = sal * 0.07;
    sal_final = sal + grat5 - imposto7;

    printf("O bonus de gratificação é de: %.2f reais\n", grat5);
    printf("O imposto pago em cima desse salario é: %.2f reais\n", imposto7);
    printf("O salario a receber é: %.2f reais\n", sal_final);

    return 0;
}