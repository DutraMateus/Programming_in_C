////Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura): Homens: (72,7 * h) – 58 e Mulheres: (62,1 * h) – 44,7//
#include<stdio.h>
#include<stdlib.h>

int main(){
    float h, peso;
    char sexo;

    printf("Insira sua altura: ");
    scanf("%f", &h);
    printf("\nInforme o seu sexo: ");
    scanf("%s",&sexo);

    if(sexo=='m' || sexo=='M'){
        peso = (72.7 * h) - 58;
        printf("\nSeu peso ideal e: %f",peso);
    }
    else if(sexo=='f' || sexo=='F'){
        peso = (62.1 * h) - 44.7;
        printf("\nSeu peso ideal e: %f",peso);
    }

    return 0;
}