/* Crie um jogo da forca onde as palavras serão escolhidas aleatoriamente de um conjunto pré definitivo.
 * O jogador tem um numero limiteado de tentativas para adivinhar a palavra.
 * O jogador vence se conseguir advinhar antes de esgotar suas tentativas.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define max_Palavras 10
#define tam_Palavra 20

char palavras[max_Palavras][tam_Palavra]={
	"elefante",
	"banana",
	"computador",
	"bicicleta",
	"laranja",
	"programacao",
	"girafa",
	"abacaxi",
	"teclado",
	"eletronico"
};

int main(void) {

	srand(time(NULL)); //inicializa a semente de aleatoriedade
	char palavra[tam_Palavra];
	char palavraOculta[tam_Palavra];
	int tamanho;
	int tentativas=6;
	int indicePalavra = rand() % max_Palavras;

	strcpy(palavra, palavras[indicePalavra]);
	tamanho = strlen(palavra);//tamanho da palavra

	//inicializa a palavra oculta
	for (int i = 0; i < tamanho; i++){
	    palavraOculta[i]= '_';
	}
	palavraOculta[tamanho]= '\0'; //toda string termina com \0

	printf("Bem vindo ao jogo da forca:\n");
	printf(" _\n"
		  "| \n");

    while(tentativas > 0){
    	printf("palavra: %s\n", palavraOculta);
    	printf("Tentativas restantes: %d\n", tentativas);

    char letra;
    printf("Digite uma Letra:");
    scanf(" %c", &letra);

    int acertos=0;

    for(int i=0; i<tamanho; i++){
    	if(palavra[i]==letra){
    		palavraOculta[i]=letra;
    		acertos++;
    	}
    }
    if (acertos == 0){
    	tentativas--;
    	printf("Letra incorreta!\n");
    }else{
    	printf("Letra correta!");

    }if (strcmp(palavra,palavraOculta) == 0){
    	printf(" Parabéns, você ganhou! a palavra era %s\n", palavra);
    	break;}

    if(tentativas == 5){
    	printf(" _ _\n"
    		   "|  o\n"
    		   "|\n");
    }else if(tentativas == 4){
    	printf(" _ _\n"
    		   "|  o\n"
    		   "|  | \n");
    }else if(tentativas == 3){
    	printf(" _ _\n"
    		   "|  o\n"
    		   "| /| \n");
    }else if(tentativas == 2){
    	printf(" _ _\n"
    		   "|  o\n"
    		   "| /|\\  \n");
    }else if(tentativas == 1){
    	printf(" _ _\n"
    		   "|  o\n"
    		   "| /|\\  \n"
    		   "| /   \n");
    }

    	if (tentativas==0){
    		printf(" _ _\n"
    	    	   "|  o\n"
    	    	   "| /|\\  \n"
    	    	   "| / \\  \n");
    		printf("Você perdeu! a palavra era %s", palavra);
    		return 0;
    	}
    }
}



     /*
   junin
     o
    /|\
    / \
	*/


