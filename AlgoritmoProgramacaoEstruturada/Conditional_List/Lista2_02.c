//Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois números forem iguais, imprima a mensagem “Números iguais”//

#include<stdio.h>

int main(){
    int n1, n2;

    printf("\nInforme o primeiro numero: ");
    scanf("%d",&n1);
    printf("\nInforme o segundo numero: ");
    scanf("%d",&n2);
    if(n1>n2){
        printf("\nN1 e o maior e N2 o menor");
    }
    if(n2>n1){
        printf("\nN2 e o maior e N1 o menor");
    }
   else{
        printf("\nOs valores sao iguais");
    }

}