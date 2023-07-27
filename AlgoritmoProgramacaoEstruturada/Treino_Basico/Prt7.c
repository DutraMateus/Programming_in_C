/*Escreva um programa para ler uma temperatura dada na escala Fahrenheit e exibir o equivalente em Celsius. C=5/9 *(F-32)*/

#include <stdio.h>

int main()
{

    float Celsius, Fahrenheit;

    printf("\nInforme a temperatura em Fahrenheit: ");
    scanf("%f", &Fahrenheit);

    Celsius = 0.55 * (Fahrenheit - 32);

    printf("\nA temperatura em Celsius sera de %.2f", Celsius);
}