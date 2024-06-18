/*
 ============================================================================
 Name        : Prj_Torneio_Tenis.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    char resultado;
    int vitorias = 0;

    printf("Digite o resultado das 6 partidas");

    for( int i=0; i < 6; i++){
        scanf(" %c", &resultado);
        if(resultado == 'V'){
            vitorias++;
        }
    }

    if (vitorias == 0){
        printf("-1\n");
    }else if(vitorias == 1 || vitorias == 2){
        printf("Grupo 3\n");
    }else if(vitorias == 3 || vitorias == 4){
        printf("Grupo 2\n");
    }else if(vitorias == 5 || vitorias == 6){
        printf("Grupo 1\n");
    }



    return 0;
}
