#include<stdio.h>

int main(){

    int i, num;
    float media;

    for(i=1; i<11; i++){
        printf("\nInforme os valores a serem calculados a media: ");
        scanf("%d",&num);
            media+=num;
    }
    media /= 10;

    printf("\nMedia: %.2f", media);
}

