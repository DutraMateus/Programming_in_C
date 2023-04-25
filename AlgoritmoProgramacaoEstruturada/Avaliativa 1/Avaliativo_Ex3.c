#include<stdio.h>
#include<math.h>
int main(){

    double area, volume, r;

    printf("Informe o valor para o Raio: ");
    scanf("%lf",&r);

    volume = (4.0/3) * 3.14159 * (r*r*r);
    area = 4 * 3.14159 * (r*r);

    printf("\nVolume = %.2lf",volume);
    printf("\nArea = %.2lf",area);

}