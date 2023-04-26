#include<stdio.h>

int main(){
    int n1[5], n2[5], soma[5];
    int i;

    for(i=0;i<5;i++){
        printf("\nInforme valores para a operacao\n");
        scanf("%d%d", &n1[i], &n2[i]);
        soma[i] = n1[i] + n2[i];
        
        if(soma[i]%2==0){
            printf("\n%d - Par\n",soma[i]);
        }
        else{
            printf("\n%d - Impar\n",soma[i]);
        }
    }
}