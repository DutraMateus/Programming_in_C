#include<stdio.h>

int main(){
    int num, maior=0, menor=99999;

    do{
        printf("\nInforme um numero: ");
        scanf("%d", &num);

        if(num>maior){
            maior = num;

        }
        if(num<menor && num>=0){
           menor = num;
            
        }
        printf("\nMaior: %d",maior);
        printf("\nMenor: %d",menor);
    } 
     while(num >= 0);
}




//tive dificuldade//