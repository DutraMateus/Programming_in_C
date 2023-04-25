//Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação, for maior que 20% do salário, imprima: “Empréstimo não concedido.”, caso contrário, imprima: “Empréstimo concedido.”//

#include<stdio.h>
int main(){
float salario, prestacao;

    printf("\nInforme o seu salario: ");
    scanf("%f",&salario);
    printf("\nInforme o valor da prestacao do emprestimo: ");
    scanf("%f",&prestacao);
    if(prestacao*1.20>salario){
        printf("\nEmprestimo nao concedido");
    }
    else{
        printf("\nEmprestimo concedido");
    }
}