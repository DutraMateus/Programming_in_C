// Faça um programa que mostre ao usuário um menu com quatro opções de operações
// matemáticas (as operações básicas, por exemplo). O usuário escolhe uma das opções, e
// o seu programa pede dois valores numéricos e realiza a operação, mostrando o
// resultado.

#include<stdio.h>

int main(){

    float n1, n2, SOMA, MULTIPLICACAO, DIVISAO, SUBTRACAO;
    int op; 

    printf("\nInforme o primeiro numero: ");
    scanf("%f",&n1);
    printf("\nInforme o segundo numero: ");
    scanf("%f",&n2);
    printf("\nInforme a operacao que deseja realizar:");
    scanf("%d",&op);
   
    switch(op){
        case 1:
            SOMA = n1 + n2;
            printf("\nResultado= %.2f", SOMA);
            break;
        case 2:
            SUBTRACAO = n1 - n2;
            printf("\nResultado= %.2f", SUBTRACAO);
            break;
        case 3:
            MULTIPLICACAO = n1 * n2;
            printf("\nResultado= %.2f", MULTIPLICACAO);
            break;
        case 4:
            DIVISAO = n1 / n2;
            printf("\nResultado= %.2f", DIVISAO);
            break;
        default:
            printf("\nInforme uma operacao valida");
   }

}

