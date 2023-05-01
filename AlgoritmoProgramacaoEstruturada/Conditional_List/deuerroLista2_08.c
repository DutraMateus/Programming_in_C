//questao no ava, tem imagem//

#include<stdio.h>
#include<string.h>

int main(){
    float valor, valorTotal;
    char estado[3];

    printf("\nInforme o valor de entrada:");
    scanf("%f",&valor);
    printf("\nInforme o estado de destino(2 letras):");
    scanf("%s",&estado);
    
    if(strcmp(estado,'MG') == 0)
    {
        valorTotal = valor * 1.07;
        printf("\nValor total do produto: %.2f",valorTotal);
    }
    else if(strcmp(estado,'SP') == 0)
    {
        valorTotal = valor * 1.12;
        printf("\nValor total do produto: %.2f",valorTotal);
    }
    else if(strcmp(estado,'RJ') == 0)
    {
        valorTotal = valor * 1.15;
        printf("\nValor total do produto: %.2f",valorTotal);
    }
    else if(strcmp(estado,'MS') == 0)
    {
        valorTotal = valor * 1.08;
        printf("\nValor total do produto: %.2f",valorTotal);
    }
    else 
    {
        printf("\nErro!!");
    }

}



