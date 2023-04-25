//questao no ava, tem imagem//

#include<stdio.h>
#include<string.h>

int main(){
    float valor, valorTotal;
    char estado[2], dest1="MG", dest2="SP", dest3="RJ", dest4="MS";

    printf("\nInforme o valor de entrada:");
    scanf("%f",&valor);
    printf("\nInforme o estado de destino(2 letras):");
    scanf("%s",&estado);
    fflush(stdin);
    
    if(strcmp(estado,dest1) == 0)
    {
        valorTotal = valor * 1.07;
        printf("\nValor total do produto: %.2f",valorTotal);
    }
    else if(strcmp(estado,dest2) == 0)
    {
        valorTotal = valor * 1.12;
        printf("\nValor total do produto: %.2f",valorTotal);
    }
    else if(strcmp(estado,dest3) == 0)
    {
        valorTotal = valor * 1.15;
        printf("\nValor total do produto: %.2f",valorTotal);
    }
    else if(strcmp(estado,dest4) == 0)
    {
        valorTotal = valor * 1.08;
        printf("\nValor total do produto: %.2f",valorTotal);
    }
    else 
    {
        printf("\nErro!!");
    }

}



