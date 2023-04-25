// Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou
// 5, mas não simultaneamente pelos dois.

#include<stdio.h>

int main(){
    int i;

    printf("\nInforme um numero: ");
    scanf("%d",&i);
    if(i%3 == 0){
        printf("\nNumero divisivel por 3");
    }
    else if(i%5 == 0){
        printf("\nNumero divisivel por 5");
    }
   else{
    printf("\nNumero Invalido");
   }
}

