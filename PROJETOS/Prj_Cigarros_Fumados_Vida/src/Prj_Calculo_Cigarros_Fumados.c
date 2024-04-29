/*
 ============================================================================
 Name        : Prj_Calculo_Cigarros_Fumados.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

	int calcularCigAoLongoVida(int anosFumando, int cigarrosPorDia){
		return anosFumando * 365 * cigarrosPorDia;
	}

	float calcularTotalGasto(int cigAoLongoVida, float precoMaco){
		return (cigAoLongoVida / 20) * precoMaco;
	}

	float calcularTempoVidaPerdido(int cigarrosFumadosAoLongoVida){
		return (cigarrosFumadosAoLongoVida * 11 / 60);
	}

int main(void) {

	int anosFumando,cigarrosPorDia;
	float precoMaco,totalGasto;

	printf("Digite o numero de anos que voce fuma:");
	scanf("%d", &anosFumando);
	printf("Digite o preço medio de um maço de cigarros:");
	scanf("%f", &precoMaco);
	printf("Digite o numero de cigarros fumados por dia:");
	scanf("%d", &cigarrosPorDia);

	int cigFumadosAoLongoVida = calcularCigAoLongoVida(anosFumando,cigarrosPorDia);

	totalGasto = calcularTotalGasto(cigFumadosAoLongoVida, precoMaco);

	printf("\nNumero de cigarros fumados ao longo da vida: %d", cigFumadosAoLongoVida);
	printf("\nTotal gasto: %.2f reais.", totalGasto);

	float tempoVidaPerdido = calcularTempoVidaPerdido(cigFumadosAoLongoVida);
	printf("\nTempo de vida perdido é de: %.2f horas", tempoVidaPerdido);

	float tempoVidaPerdidoEmDias = tempoVidaPerdido / 24;
	printf("\nO que da um total de aproximadamente %.2f dias de vida desperdiçados.", tempoVidaPerdidoEmDias);

	return 0;


}
