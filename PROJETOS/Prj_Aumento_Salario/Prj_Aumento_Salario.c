#include <stdlib.h>
#include <stdio.h>

/*3) Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se  que este sofreu um aumento de 25%.*/

int main(void)
{

    float salario, aumento, novosal;
    printf("Insira o salário do funcionario em reais: \n");
    scanf("%f", &salario);
    aumento = salario * 25 / 100;
    novosal = salario + aumento;
    printf("O novo salario com 25%% de aumento é: %2.f reais\n", novosal);

    return 0;
}
