#include <stdio.h>

void main(){
    float tasaDeInteres = 0;
    float inversionInicial = 0;
    int cantidadDeMeses = 0; 
    float inversionAcumulada = 0;

    printf("Introduzca la tasa de interes mensual: ");
    scanf("%f", &tasaDeInteres);
    tasaDeInteres = (tasaDeInteres / 100) + 1;

    printf("Introduzca la inversion inicial: ");
    scanf("%f", &inversionInicial);
    
    printf("Introduzca la cantidad de meses que desea mantener el plazo fijo: ");
    scanf("%d", &cantidadDeMeses);
    
    for (int i = 0; i < cantidadDeMeses; i++){
        inversionAcumulada = tasaDeInteres * inversionInicial;
        inversionInicial = inversionAcumulada;
    }

    printf("El total acumulado al final del plazo es: %.2f\n", inversionAcumulada);
}