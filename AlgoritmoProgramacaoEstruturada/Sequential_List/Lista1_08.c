//Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D). Apresente o resultado da seguinte forma://
//DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”) DIFERENCA = “valor de DIFERENCA//

#include<stdio.h>
int main(){
    int A, B, C, D;
    int DIFERENCA;

    printf("\nInforme o primeiro numero: ");
    scanf("%d",&A);
    printf("\nInforme o segundo numero: ");
    scanf("%d",&B);
    printf("\nInforme o terceiro numero: ");
    scanf("%d",&C);
    printf("\nInforme o quarto numero: ");
    scanf("%d",&D);

    DIFERENCA = (A * B - C * D);

    printf("\n%d * %d - %d * %d = %d", A, B, C, D, DIFERENCA);

}