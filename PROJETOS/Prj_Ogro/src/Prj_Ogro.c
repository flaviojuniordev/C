#include <stdlib.h>
#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);

    if (N <= 5){
        for (int i = 0; i < N; i++){
            printf("I");
        }
    }
    else{
        printf("IIIII");
        for (int i = 0; i < N - 5; i++){
            printf(" I");
        }
    }
}