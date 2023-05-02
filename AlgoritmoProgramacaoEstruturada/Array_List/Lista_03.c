#include<stdio.h>

int main(){

    char vetorChar[30];
    int i, numero;

    printf("\nInforme o tamanho do texto a ser invertido: ");
    scanf("%d",&numero);

    for(i=0 ; i<numero ; i++){
        printf("\nInforme o nome: ");
        scanf("%c", &vetorChar[i]);
    }

    for(i=numero ; i>=0 ; i--){
        printf("%c", vetorChar[i]);
    }
}
// perguntar pra prof pq o que eu fiz não funciona

// #include<stdio.h>
// #include<string.h>

// int main(){

//     char vetorChar[30];
//     int i;

//     printf("\nDigite a palavra: ");
//     scanf("%s",&vetorChar);

//     for(i=strlen(vetorChar); i>=0; i--){
//         printf("%c", vetorChar[i]);
//     }

// }

