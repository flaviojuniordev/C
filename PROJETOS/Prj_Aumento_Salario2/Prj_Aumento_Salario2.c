#include <stdlib.h>
#include <stdio.h>

/*4) faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.*/

int main(void)
{

    float sal, perc_aumento, valor_novo, novo_sal;
    printf("Insira o salario: \n");
    scanf("%f", &sal);
    printf("Insira o percentual de aumento: \n");
    scanf("%f", &perc_aumento);

    valor_novo = sal * perc_aumento / 100;
    novo_sal = sal + valor_novo;
    printf("O valor do aumento é de %2.f reais \n", valor_novo);
    printf("O novo salario é %2.f reais\n", novo_sal);

    return 0;
}