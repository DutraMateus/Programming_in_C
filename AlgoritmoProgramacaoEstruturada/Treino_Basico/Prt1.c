/*Para vários tributos, a base de cálculo é o salário mínimo. Fazer um programa que leia o valor do salário mínimo e o valor do salário de uma pessoa. Calcular e imprimir quantos salários mínimos ela ganha.
 */

#include <stdio.h>

int main()
{
    double salario, calculo, salarioMinimo;
    char nome[20];

    printf("\nInforme o seu nome: ");
    scanf("%s", &nome);
    printf("\nInforme o seu salario: ");
    scanf("%lf", &salario);

    salarioMinimo = 1450.00;

    calculo = salario / salarioMinimo;

    printf("\nO senhor %s recebe %lf salarios minimos\n", nome, calculo);
}