// Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 e
// imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1, segunda-
// feira, se 2, e assim por diante.

#include<stdio.h>

int main(){
    int numero; 

    printf("\nInforme um numero :");
    scanf("%d",&numero);
    switch(numero){
	    case 1:
	        printf("Segunda-feira");
	    break;	
	    case 2: 
	        printf("Terca-feira");
	    break;	
	    case 3:
	        printf("Quarta-feira");
	    break;	
	    case 4:
	        printf("Quinta-feira");
	    break;	
	    case 5:
	        printf("Sexta-feira");
	    break;	
	    case 6:
	        printf("Sabado");
	    break;	
	    case 7:
	        printf("Domingo");
	    break;
	    default:
		    printf("\nO numero informado deve ser de 1 a 7\n");					
    }
}
