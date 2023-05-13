#include<stdio.h>
#include<string.h>

int main(){

    int vetor[80], i = 0, nBusca, posicao[80], contador = 0, numeroValores;
    char opcao[3];

    do{
        printf("\nDigite o valor:");
        scanf("%d",&vetor[i]);
        i++;
        printf("\nDeseja incluir mais um numero? sim ou nao");
        gets(opcao);
    }
    while(strcmp(opcao == sim)==0 && i<80);
    
    printf("\nInforme o numero: ");
    scanf("%d", &nBusca);

    numeroValores = i;

    for(i=0;i<numeroValores;i++){
        if(nBusca == vetor[i]){
            posicao[contador] = i;
            contador++;
        }   
    }
    
    for(i=0;i<contador;i++){
        printf("%d", posicao[i]);
    }

    printf("Quantidade: %d",contador);
}