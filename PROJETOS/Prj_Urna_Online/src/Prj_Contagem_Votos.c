/*
 ============================================================================
 Name        : Prj_Contagem_Votos.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int receberVoto(){

	int voto;
	printf("Bem vindo a urna online! selecione o seu candidato...\n");
	printf("1 - Candidato A\n");
	printf("2 - Candidato B\n");
	printf("3 - Apurar votos...\n");
	printf("4 - Sair.\n");
	scanf("%d", &voto);

	return voto;
}

int main(void) {

	int votoCandidatoA = 0;
	int votoCandidatoB = 0;
	int opcao;

	do {

		opcao = receberVoto();

		switch (opcao){
		case 1:
			votoCandidatoA++;
			printf("Seu voto no candidato A foi computado com sucesso!\n");
			break;

		case 2:
			votoCandidatoB++;
			printf("Seu voto no candidato B foi computado com sucesso!\n");
			break;

		case 3:
			printf("Resultado:\n");
			printf("O candidato A teve %d votos\n", votoCandidatoA);
			printf("O candidato B teve %d votos\n", votoCandidatoB);
			if(votoCandidatoA > votoCandidatoB){
				printf("O candidato vencedor foi o A!\n");
			}else if(votoCandidatoB > votoCandidatoA){
				printf("O candidato vencedor foi o B!\n");
			}else {
				printf("Empate!\n");
			}
			break;

		case 4:
			printf("Saindo...\n");
			break;

		default:
			printf("Opçao invalida tente novamente.\n");
			break;


		}

	} while (opcao != 4);

	return 0;

}
