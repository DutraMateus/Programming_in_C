/*Faça um programa em C que receba(leia) o nome de um usuário e imprima na tela.*/

#include<stdio.h>

int main(){

    char nome[20];

    printf("\nInforme seu nome: ");
    scanf("%s", &nome);
    printf("\nSeu nome e %s", nome);
}