//Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostre qual a classificação dessa pessoa.//
//imagem no ava//

#include<stdio.h>

int main(){
    
    double altura, peso;

    printf("\nInforme a sua altura: ");
    scanf("%lf",&altura);
    printf("\nInforme o seu peso: ");
    scanf("%lf",&peso);
    if(altura<=1.20 && peso<=60){
        printf("\nCategoria A");
    }
    else if(altura<=1.20 && peso>60 && peso<=90){
         printf("\nCategoria D");
    }
    else if(altura<=1.20 && peso>90){
         printf("\nCategoria G");
    }
    else if(altura>1.20 && altura<=1.70 && peso<=60){
        printf("\nCategoria B");
    }
    else if(altura>1.20 && altura<=1.70 && peso>60 && peso<=90){
        printf("\nCategoria E");
    }
    else if(altura>1.20 && altura<=1.70 && peso>90){
        printf("\nCategoria H");
    }
    else if(altura>1.70 && peso<=60){
        printf("\nCategoria C");
    }
    else if(altura>1.70 && peso>60 && peso<90){
        printf("\nCategoria F");
    }
    else if(altura>1.70 && peso>90){
        printf("\nCategoria I");
    }
    else{
        printf("\nInserir dados validos!");
    }
}






