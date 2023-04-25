#include<stdio.h>

int main(){
    int numero, qtd, carrinho=0, prosseguir=1;
	
    do{
    printf("\nInforme um numero\n(1 - Abacaxi)-----(2 - Maca)-----(3 - Pera) :");
    scanf("%d",&numero);

        switch(numero){
	        case 1:
	            printf("\nInforme a quantidade de Abacaxi deseja: ");
                scanf("%d",&qtd);
                carrinho += qtd * 5;
    	    break;
	
	        case 2: 
	            printf("\nInforme a quantidade de Maca deseja: ");
                scanf("%d",&qtd);
                carrinho += qtd * 1;
	        break;
	
	        case 3:
	            printf("\nInforme a quantidade de Pera deseja: ");
                scanf("%d",&qtd);
                carrinho += qtd * 4;
	        break;

	        default:
		        printf("\nO numero informado deve ser de 1 a 4\n");
			
		}

        printf("\nO valor a ser pago e: R$ %d", carrinho);
        printf("\nContinuar comprando( 1 - sim / 0 - nao)");
        scanf("%d",&prosseguir);
    } while (prosseguir == 1);
}
