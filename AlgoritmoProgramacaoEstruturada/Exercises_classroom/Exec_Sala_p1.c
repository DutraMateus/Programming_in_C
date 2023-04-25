#include<stdio.h>

int main(){

    float C, F;

    printf("\nInforme uma temperatura em Celsius: ");
    scanf("%f",&C);

    F = (9 * ( C / 5) + 32);

    printf("\nA temperaturam convertida em fahrenheit=%.2f",F);
    
    printf("\nInforme uma temperatura em Fahrenheit: ");
    scanf("%f",&F);

    C = ( (F - 32) * 5 / 9 );
    printf("\nA temperaturam convertida em Celsius=%.2f",C);
}