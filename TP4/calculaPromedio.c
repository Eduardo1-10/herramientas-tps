#include <stdio.h>

void main(){
    int val1, val2, val3, val4;
    printf("Por Favor ingrese los 4 enteros separados por un espacio para empezar el calculo:");
    scanf("%d %d %d %d", &val1, &val2, &val3, &val4);

    int promedio;

    promedio = (val1 + val2 + val3 + val4) / 4;

    if (promedio > 10){
        printf("Valor mayor que 10\n");
    } else {
        printf("Valor menor que 10\n");
    }
}