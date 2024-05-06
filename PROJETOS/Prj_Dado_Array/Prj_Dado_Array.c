#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int rodarDado()
{
    return rand() % 6 + 1;
}

int calcularSoma(int dado1, int dado2)
{
    return dado1 + dado2;
}

int main(void)
{
    int jogador1[2], jogador2[2];
    int somaJogador1, somaJogador2;
    srand(time(NULL));
    jogador1[0] = rodarDado();
    jogador1[1] = rodarDado();
    printf("Jogador 1: %d + %d", jogador1[0], jogador1[1]);
    somaJogador1 = calcularSoma(jogador1[0], jogador1[1]);
    printf("Soma do jogador 1: %d", somaJogador1);
    jogador2[0] = rolarDado();
    jogador2[1] = rolarDado();
    printf("Jogador 2: %d + %d", jogador2[0], jogador2[1]);
    somaJogador2 = calcularSoma(jogador2[0], jogador2[1]);
    printf("Soma do jogador 2: %d", somaJogador2);

    if (somaJogador1 > somaJogador2)
    {
        printf("Jogador 1 venceu");
    }
    else if (somaJogador1 < somaJogador2)
    {
        printf("Jogador 2 venceu");
    }
    else
    {
        printf("empate");
    }

    return 0;
}
