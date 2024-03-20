/*
 ============================================================================
 Name        : prj_tarefa2-5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void opcaopagamentocliente(){
		float gastocliente, avista, parcelado2x, parcelado3x, valorprestacao, valoravista;
		int escolheropcao, numparcelas;

		printf("Quanto o cliente gastou nessa loja? \n");
		scanf("%f", &gastocliente);

		printf("Insira a forma de pagamento: \n 1 - A vista: 10%% de desconto \n 2 - Parcelado 2x:"
				"preço da etiqueta \n 3 - Parcelado de 3x até 10x: 3%% juros ao mes (somente para compras acima de 300 reais %d\n", escolheropcao);
		scanf("%d", &escolheropcao);

		if (escolheropcao == 1){
			avista = gastocliente - (gastocliente * 0,10);
		printf("O valor a ser pago pelo cliente é: %f\n", avista);
		}
		if (escolheropcao == 2){
			parcelado2x = gastocliente/2;
		printf ("O valor total, sera dividido em duas parcelas de: %f\n", parcelado2x);
		}
		if (escolheropcao == 3){
			printf("de 3 a 10, de quantas vezes voce quer parcelar? \n",numparcelas);
			scanf("%d", &numparcelas);
			parcelado3x = gastocliente / numparcelas + (gastocliente * 0,03 * numparcelas);
			printf("O valor total, será dividido em %d parcelas de %.2f reais.", numparcelas, parcelado3x);

		}
	}


int main(void) {

	opcaopagamentocliente ();

	return 0;

}
