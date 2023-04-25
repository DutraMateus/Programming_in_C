#include <stdio.h>
int main(){
    int numeroInteiro;
    float numeroRealFloat;
    double numeroRealDouble;
    char umaLetra;
    char umaString[100];

        scanf("%d", &numeroInteiro);
        scanf("%f", &numeroRealFloat);
        scanf("%lf", &numeroRealDouble);
        scanf("%c", &umaLetra);
        
        scanf("%s", &umaString);

        scanf("%s", &umaString); //sem espaço
        gets(umaString); //funciona o espaço, mas não é o mais recomendável 
        fgets(umaString, 100, stdin); //funciona o espaço, mais recomendável

        printf("%3d Inteiro\n", numeroInteiro);
        printf("Float: %.3f\n", numeroRealFloat);
        printf("Double: %1lf\n", numeroRealDouble);
        printf("Char: %c\n", umaLetra);
        printf("String: %s\n", umaString);
        printf("Endereço do Inteiro %x", &numeroInteiro); //%x é para dar o resultado em hexadecimal
}