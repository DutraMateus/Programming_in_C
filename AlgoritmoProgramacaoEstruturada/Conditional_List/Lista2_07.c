//Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior do que A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem positivos e se a variável A for par escrever a mensagem "Valores aceitos", senão escrever "Valores nao aceitos".//

#include<stdio.h>

int main(){

    int a, b, c, d;


    printf("\nInforme o valor de A: ");
    scanf("%d",&a);
    printf("\nInforme o valor de B: ");
    scanf("%d",&b);
    printf("\nInforme o valor de C: ");
    scanf("%d",&c);
    printf("\nInforme o valor de D: ");
    scanf("%d",&d);
    if(b > c && d > a && (c + d) > (a + b)&& c>=0 && d>=0 && a %2==0){
        printf("\nValores aceitos");
    }
    else{
        printf("\nValores nao aceitos");
    }


}