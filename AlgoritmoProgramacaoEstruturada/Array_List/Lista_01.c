#include<stdio.h>

int main(){

    float vetorReais[30];
    int i;

    for(i=0; i<30; i++){
        printf("\nInforme a nota que sera salva no indice = %d\n",i);
        scanf("%f",&vetorReais[i]);
    }
    
    for(i=0; i<30; i++){
        printf("%f\t", vetorReais[i]);
    }

}