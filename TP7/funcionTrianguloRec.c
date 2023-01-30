#include <stdio.h>
#include <math.h>
float calculaHipotenusaAPartirDe(float catetoA, float catetoB);

void main(){
    float catetoA, catetoB, hipotenusa;

    printf("Ingrese los valores de los catetos: \n");
    printf("cateto A = ");
    scanf("%f", &catetoA);
    printf("cateto B = ");
    scanf("%f", &catetoB);

    printf("El valor de la hipotenusa es: %.2f\n",calculaHipotenusaAPartirDe(catetoA, catetoB));
}


float calculaHipotenusaAPartirDe(float catetoA, float catetoB){
    return sqrt((pow(catetoA,2)+pow(catetoB,2)));
}