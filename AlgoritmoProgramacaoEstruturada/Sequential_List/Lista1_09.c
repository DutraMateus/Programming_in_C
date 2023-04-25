// Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro).//
//Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais.//

#include <stdio.h>
#include <string.h>
int main(){

    char nome[20];
    float salario, vendas, comissao, salarioFinal;

    printf("\nInforme o nome do vendedor: ");
    scanf("%s",&nome);
    printf("\nInforme o seu salario fixo: ");
    scanf("%f",&salario);
    printf("\nInforme a quantidade de vendas em dinheiro: ");
    scanf("%f",&vendas);

    comissao = vendas * 0.15;
    salarioFinal = comissao + salario;

    printf("\nO valor total a receber e: %.2f",salarioFinal);


}

