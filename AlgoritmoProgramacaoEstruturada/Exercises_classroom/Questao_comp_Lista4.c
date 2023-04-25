#include<stdio.h>
int main(){
    int i, N1, N2;
scanf("%d%d", &N1, &N2);
	for(i=N1 ; i<N2  ; i++){
        if(i%2!=0){
		printf("%d\n", i);
	}
    }
}