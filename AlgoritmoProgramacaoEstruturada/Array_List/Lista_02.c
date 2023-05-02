#include<stdio.h>

int main(){

    float notas[50];
    int i, alunos;

    printf("\ninforme a quantidade de alunos: ");
    scanf("%d",&alunos);

    for(i=0 ; i<alunos ; i++){
        printf("\nDigite a nota: ");
        scanf("%f",&notas[i]);
    }
    
    for(i=0 ; i<alunos ; i++){
        printf("%f\t", notas[i]);
    }

}