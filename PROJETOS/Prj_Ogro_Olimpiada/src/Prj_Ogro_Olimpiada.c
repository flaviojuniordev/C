/*
 ============================================================================
 Name        : Prj_Ogro_Olimpiada.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdlib.h>
#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);

    if (N <= 5){
        for (int i = 0; i < N; i++){
            printf("I");
        }
        printf("\n*\n");
    }
    else{
        printf("IIIII\n");
        for (int i = 0; i < N - 5; i++){
            printf("I");
        }
    }
}
