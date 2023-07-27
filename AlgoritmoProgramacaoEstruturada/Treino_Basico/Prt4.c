/*A imobiliária Central vende apenas terrenos retangulares. Faça um algoritmo para ler as dimensões de um terreno e depois exibir a área do terreno.*/

#include <stdio.h>

int main()
{

    float area, largura, altura;

    printf("\nInforme a altura do terreno em metros: ");
    scanf("%f", &altura);
    printf("\nInforme a largura do terreno em metros: ");
    scanf("%f", &largura);

    area = altura * largura;

    printf("\nA area do terreno vai ser de %.2f metros quadrados", area);
}
