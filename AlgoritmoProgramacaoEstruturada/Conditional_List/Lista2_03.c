//Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.//

#include<stdio.h>

int main(){

    int num;

    printf("\\nInforme um numero: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("\nO valor e par!");
    }
    else{
        printf("\nO valor e impar!");
    }


}
