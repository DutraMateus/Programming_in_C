/*Crie um programa que leia um valor de hora e informe quantos minutos se passaram desde o início do dia.
 */

#include <stdio.h>

int main()
{

    int hora, minutos;

    printf("\nInforme uma hora: ");
    scanf("%d", &hora);

    minutos = hora * 60;

    printf("\n%d hora igual a %d minutos\n", hora, minutos);
}