/*Primeira etapa: incluir até 1000 usuários*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void PreencherInformacoes(char NomeCompleto[][40], char email[][30], char sexo[][10], char endereco[][50], double *altura, int vacina[]){
    for(int i=0 ; i<2 ; i++){
        printf("\nNome: ");
        fgets(NomeCompleto[i], 40 ,stdin);
        fflush(stdin);

        if(NomeCompleto[i][0] == 'L'){
            break;
        }

        do{
            printf("\nEmail: ");
            fgets(email[i], 30, stdin);
            fflush(stdin);
        } while (strchr(email[i], '@') == 0);

        do{
            printf("\nSexo: ");
            fgets(sexo[i], 10, stdin);
            fflush(stdin);
        } while(strchr(sexo[i], 'feminino') == 0 && strchr(sexo[i], 'masculino') == 0 && strchr(sexo[i], 'indiferente') == 0);

        printf("\nEndereco: ");
        fgets(endereco[i], 50, stdin);
        fflush(stdin);

        do{
            printf("\nAltura(metros): ");
            scanf("%.2f", &altura[i]);
            fflush(stdin);
        } while (altura[i] < 1 && altura[i] > 2);
        
        do{
            printf("\nVacinado(1 - sim) (0 - nao): ");
            scanf("%d", &vacina[i]);
            fflush(stdin);
        } while (vacina[i], '1' == 0 && vacina[i], '0' == 0);
    }
}

int main(){
    char NomeCompleto[2][40], email[2][30], sexo[2][10], endereco[2][50];
    int i, vacina[2]; 
    double altura[2];

    PreencherInformacoes(NomeCompleto, email, sexo, endereco, altura, vacina);
    
}