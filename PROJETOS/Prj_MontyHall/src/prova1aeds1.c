#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int portaEscolhida, portaVazia;
	srand(time(NULL));
	int portaPremiada = rand() % 3 + 1;
	char simOuNao;

	printf ("A porta premiada é: %d \n", portaPremiada);
	printf("> Bem-vindo ao jogo Monty Hall! \n");
	printf("Escolha uma porta (1, 2 ou 3): \n");
	printf("porta 1\nporta 2\nporta 3\n");
	scanf("%d", &portaEscolhida);

	if (portaEscolhida > 3 || portaEscolhida < 1){
		printf("Numero invalido!");
		}

	if(portaEscolhida == portaPremiada){
		printf("voce escolheu a porta %d \n", portaEscolhida);
	}
	else if(portaEscolhida != portaPremiada){
			printf("voce escolheu a porta %d \n", portaEscolhida);
		}

	do{
		portaVazia = rand()% 3 + 1;

	}while(portaEscolhida == portaVazia || portaPremiada == portaVazia);

	printf("\nA porta vazia aberta foi a: %d", portaVazia);
	
	printf("\n Uma das portas vazias foi retirada, você quer trocar de porta?\n SIM-S \n NAO-N\n");
	scanf(" %c", &simOuNao);


	if(portaEscolhida == portaPremiada && simOuNao =='s'){
		printf("VOCE PERDEU!");
		printf("Você trocou a porta %d correta pela porta errada!! ", portaPremiada);;

	}else if(portaEscolhida != portaPremiada && simOuNao =='s'){
		printf("VOCE GANHOU!");
		printf ("Você trocou da %d errada ", portaEscolhida);
		printf("para a %d correta ", portaPremiada);
	}

	if(portaEscolhida == portaPremiada && simOuNao =='n'){
		printf("VOCE GANHOU!");

	}else if(portaEscolhida != portaPremiada && simOuNao =='N'){
		printf("VOCE PERDEU!");

	}





	return 0;



}
