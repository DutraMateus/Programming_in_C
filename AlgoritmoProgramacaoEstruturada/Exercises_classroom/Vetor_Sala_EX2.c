//somar dois numeros, usando vetor 5 posições//

#include<stdio.h>

int main(){
    float n1[5], n2[5], soma[5];
    int i;

    for(i=0;i<5;i++){
        printf("Informe os valores a ser calculados");
        scanf("%f%f", &n1[i], &n2[i]);
        soma[i] = n1[i] + n2[i];
        printf("\nA soma sera: %.2f\n",soma[i]);
    }
}