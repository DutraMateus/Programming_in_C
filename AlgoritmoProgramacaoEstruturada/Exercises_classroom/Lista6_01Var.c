#include<stdio.h>

int main(){

    float vetorReais[5];
    int i;

    for(i=0; i<5; i++){
        printf("\nInforme a nota que sera salva no indice = %d\n",i);
        scanf("%f",&vetorReais[i]);
    }
    for(i=0; i<5; i++){
        printf("%f\t", vetorReais[i]);
        printf("%d\t",&vetorReais[i]);
        printf("%x\t",&vetorReais[i]);
    }

}