/*Escreva um programa em C que receba um valor inteiro e diga se ele é múltiplo de 5.*/

#include <stdio.h>

int main()
{
    int num;

    printf("\nInforme um numero: ");
    scanf("%d", &num);

    if (num % 5 == 0)
    {
        printf("\nNumero %d e multiplo de 5!", num);
    }
    else
    {
        printf("\nNumero nao multiplo de 5!");
    }
}