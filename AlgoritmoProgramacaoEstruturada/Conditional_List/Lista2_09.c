//questao no ava, tem imagem

#include<stdio.h>

int main(){

    int idade;

    printf("\nInforme sua idade: ");
    scanf("%d",&idade);
    if(idade>=5&&idade<=7){
        printf("\nPertencente a categoria Infantil A");
    }
    else if(idade>=8&&idade<=10){
        printf("\nPertencente a categoria Infantil B");
    }
    else if(idade>=11&&idade<=13){
        printf("\nPertencente a categoria Juvenil A");
    }
    else if(idade>=14&&idade<=17){
        printf("\nPertencente a categoria Juvenil B");
    }
    else if(idade>=18){
        printf("\nPertencente a categoria Senior");
    }
}