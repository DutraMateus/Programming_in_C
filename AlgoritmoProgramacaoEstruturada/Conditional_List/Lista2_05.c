//Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: o número digitado ao quadrado e raiz quadrada do número digitado.//

#include<stdio.h>
#include<math.h>
int main(){

    double numero, raiz, quadrado;

    printf("\nInforme um numero: ");
    scanf("%lf",&numero);
    if(numero>=0){
        raiz = sqrt(numero);
        quadrado = pow(numero , 2);
        printf("\nRaiz = %.2lf e Quadrado = %.2lf",raiz,quadrado);
    }
    else{
        quadrado = pow(numero , 2);
        printf("\nQuadrado = %.2lf .Numero negativo nao possui raiz quadrada",quadrado);
    }
}
