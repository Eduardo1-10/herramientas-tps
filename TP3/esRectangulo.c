#include <stdio.h>
#include <math.h>
void main(){
    float ladoA, ladoB, ladoC;
    printf("Ingrese los lados del triangulo:");
    printf("\nIngrese el lado A:");
    scanf("%f", &ladoA);
    printf("\nIngrese el lado B:");
    scanf("%f", &ladoB);
    printf("\nIngrese el lado C:");
    scanf("%f", &ladoC);

    float lados = pow(ladoA,2) + pow(ladoA,2);
    float tercerLado = pow(ladoC,2);

    if(lados == tercerLado){
        printf("Es un triangulo rectángulo");
        return;
    }
    printf("Los valores no corresponden a los lados de un triangulo rectángulo\n");
}