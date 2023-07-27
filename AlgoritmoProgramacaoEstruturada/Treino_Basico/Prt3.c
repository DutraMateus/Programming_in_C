/*Crie um programa para ler 3 notas e mostrar a média delas.
 */

#include <stdio.h>

int main()
{

    float n1, n2, media;

    printf("\nInforme a primeira nota: ");
    scanf("%f", &n1);
    printf("\nInforme a segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    printf("\nA media e %.2f", media);
}