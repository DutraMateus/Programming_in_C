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