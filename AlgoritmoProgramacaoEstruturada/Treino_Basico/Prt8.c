/*Escreva um programa que leia um número inteiro positivo e exiba o dobro do mesmo.*/

#include<stdio.h>

int main(){

    int num, dobro;

    printf("\nInforme um numero: ");
    scanf("%d", &num);

    dobro = num * 2;

    printf("\nO dobro do numero informado sera %d", dobro);
}