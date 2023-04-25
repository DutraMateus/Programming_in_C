#include<stdio.h>

int main(){

    int num, i;

    printf("\nInforme um numero: ");
    scanf("%d",&num);
    for (i = 1; i <= num; i++){
        if(num%i == 0){
           printf("\n%d", i) ;
        }
    }

}

