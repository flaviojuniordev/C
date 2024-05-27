#include <stdio.h>
#include <stdlib.h>

int main() {

   int alunos[10];
   int i;
   float soma = 0;

   for(i = 0; i <=9; i++){
     printf("Digite a idade do %dº aluno:", i + 1);
     scanf("%d", &alunos[i]);
     soma += alunos[i];
   }

    printf("Soma da idade dos alunos é: %f ", soma);
    printf("\nA média da idade dos alunos é: %f ", soma/10);

   return 0;
}
