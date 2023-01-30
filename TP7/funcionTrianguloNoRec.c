#include <stdio.h>
#include <math.h>
float calculaHipotenusaAPartirDe(float catetoA, float catetoB, float angulo);

void main(){
    float catetoA, catetoB, hipotenusa, angulo;

    printf("Ingrese los valores de los catetos A y B: \n");
    printf("cateto A = ");
    scanf("%f", &catetoA);
    printf("cateto B = ");
    scanf("%f", &catetoB);

    printf("Ingrese el valor del angulo entre A y B: ");
    scanf("%f", &angulo);

    printf("El valor del tercer cateto es: %.2f\n",calculaCatetoAPartirDe(catetoA, catetoB, angulo));

}


float calculaCatetoAPartirDe(float catetoA, float catetoB, float angulo){
    return sqrt((pow(catetoA,2)+pow(catetoB,2)) - (2 * catetoA * catetoB * cos(angulo)));
}