#include<stdio.h>

int main(){
    float n1[8], n2[8], media[8];
    int i;
    
    for(i=0;i<8;i++){
        printf("\nInforme as notas a serem calculadas");
        scanf("%f%f", &n1[i], &n2[i]);
        media[i]=(n1[i]+n2[i])/2;
        printf("\nA media sera : %.2f", media[i]);
    }
}