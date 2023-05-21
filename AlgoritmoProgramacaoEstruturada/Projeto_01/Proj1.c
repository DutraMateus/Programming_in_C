/*Primeira etapa: incluir até 1000 usuários*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void PreencherInformacoes(char NomeCompleto[][40], char email[][30], char sexo[][10], char endereco[][50], double *altura, int vacina[]){
    for(int i=0 ; i<1000 ; i++){
        printf("\nInforme o NOME do usuario: ");
        fgets(NomeCompleto[i], 40 ,stdin);
        fflush(stdin);

        if(NomeCompleto[i][0] == 'L'){
            break;
        }

        do{
            printf("\nInforme o EMAIL do usuario: ");
            fgets(email[i], 30, stdin);
            fflush(stdin);
        } while (strchr(email[i], '@') == 0);

        do{
            printf("\nInforme o SEXO do usuario: ");
            fgets(sexo[i], 10, stdin);
            fflush(stdin);
        } while(strchr(sexo[i], 'feminino') == 0 && strchr(sexo[i], 'masculino') == 0 && strchr(sexo[i], 'indiferente') == 0);

        printf("\nInforme o ENDERECO do usuario: ");
        fgets(endereco[i], 50, stdin);
        fflush(stdin);

        do{
            printf("\nInforme o ALTURA(metros) do usuario: ");
            scanf("%.2f", &altura[i]);
            fflush(stdin);
        } while (altura[i] < 1 && altura[i] > 2);
        
        do{
            printf("\nInfome se o usuario foi ou nao VACINADO(1 - sim) (0 - nao): ");
            scanf("%d", &vacina[i]);
            fflush(stdin);
        } while (vacina[i], '1' == 0 && vacina[i], '0' == 0);
    }
}

int main(){
    char NomeCompleto[1000][40], email[2][30], sexo[1000][10], endereco[1000][50];
    int i, vacina[1000]; 
    double altura[1000];

    PreencherInformacoes(NomeCompleto, email, sexo, endereco, altura, vacina);
    
}