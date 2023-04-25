// Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
// seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na
// tabela a seguir:
//imagem no ava

#include<stdio.h>

int main(){

    int x, y, z, operacao;
    float resultMedia;

    printf("\nInforme os 3 numeros:\n");
    scanf("%d%d%d",&x, &y, &z);
    printf("\nInforme a operacao desejada: ");
    scanf("%d", &operacao);
    if( operacao == 1){
        resultMedia = x * y * z;
        printf("\nResultado: %.2f",resultMedia);
    }
    else if( operacao == 2){
        resultMedia = (x + 2 * y + 3 * z) / 6;
        printf("\nResultado: %.2f",resultMedia);
    }
    else if( operacao == 3){
        resultMedia = 1 / (1/x + 1/y + 1/z);
        printf("\nResultado: %.2f",resultMedia);
    }
    else if( operacao == 4){
        resultMedia = (x + y + z) / 3;
        printf("\nResultado: %.2f",resultMedia);
    }
    else{
        printf("\nInsira um valor valido!");
    }
}










