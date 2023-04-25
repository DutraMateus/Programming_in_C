//Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável PROD. A seguir mostre a variável PROD com mensagem: PROD = “valor de PROD”.//


#include<stdio.h>
int main(){
    int A, B, PROD;

    printf("\nInforme o primeiro numero: ");
    scanf("%d",&A);
    printf("\nInforme o segundo numero: ");
    scanf("%d",&B);

    PROD= A * B;

    printf("\nPROD= %d", PROD);

}