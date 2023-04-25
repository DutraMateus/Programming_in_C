#include <stdio.h>
#include <math.h>

int main(){

    float x, y, x1, x2, y1, y2, distancia;

    printf("\nInforme um valor ao eixo x1: ");
    scanf("%f",&x1);
    printf("\nInforme um valor ao eixo x2: ");
    scanf("%f",&x2);
    printf("\nInforme um valor ao eixo y1: ");
    scanf("%f",&y1);
    printf("\nInforme um valor ao eixo y2: ");
    scanf("%f",&y2);

    distancia = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    printf("%.4f",distancia);

}