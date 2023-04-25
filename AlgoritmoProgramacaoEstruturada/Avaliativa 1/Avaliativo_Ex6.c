#include<stdio.h>

int main(){
    int i = 1000, soma=0;
	for(i = 0; i < 1000  ; i++)
        if(i%3 == 0 || i%5==0 ){
		    soma += i;
            printf("\n%d",i);
	    }
    printf("\nA soma sera: %d", soma);
}
