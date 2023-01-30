#include <stdio.h>
#include <math.h>

float calculaCatetoAPartirDe(float catetoA, float catetoB, float angulo);
float calculaAnguloentreCatetosAPartirDe(float catetoA, float catetoB, float catetoC);
float deGradosARadianes(float angulo);
float deRadianesAGrados(float angulo);

void main(){
    float catetoA, catetoB, catetoC, hipotenusa, angulo;

    printf("Ingrese los valores de los catetos: \n");
    printf("cateto A = ");
    scanf("%f", &catetoA);
    printf("cateto B = ");
    scanf("%f", &catetoB);

    printf("Ingrese el valor del angulo entre A y B en grados: ");
    scanf("%f", &angulo);
    angulo = deGradosARadianes(angulo);

    catetoC = calculaCatetoAPartirDe(catetoA, catetoB, angulo);
    printf("El valor del tercer cateto es: %.2f\n",catetoC);

    printf("El Angulo entre A y B es: %.2f\n", calculaAnguloentreCatetosAPartirDe(catetoA, catetoB, catetoC));
    printf("El Angulo entre A y C es: %.2f\n", calculaAnguloentreCatetosAPartirDe(catetoA, catetoC, catetoB));
    printf("El Angulo entre B y C es: %.2f\n", calculaAnguloentreCatetosAPartirDe(catetoB, catetoC, catetoA));

}

float deGradosARadianes(float angulo){
    return angulo * (M_PI/180);
}

float deRadianesAGrados(float angulo){
    return angulo * (180/M_PI);
}

float calculaCatetoAPartirDe(float catetoA, float catetoB, float angulo){
    return sqrt((pow(catetoA,2)+pow(catetoB,2)) - (2 * catetoA * catetoB * cos(angulo)));
}

float calculaAnguloentreCatetosAPartirDe(float catetoA, float catetoB, float catetoC){
    return deRadianesAGrados(acos((pow(catetoA,2)+pow(catetoB,2)-pow(catetoC,2)) / (2 * catetoA * catetoB)));
}