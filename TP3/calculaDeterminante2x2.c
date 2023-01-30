#include <stdio.h>

void main(){
    float valor1, valor2, valor3, valor4, resultado;

    printf("Ingrese los valores de la matriz 2x2 en forma de filas separando las columnas por una coma y las filas por el caracter :\n");
    printf("Por ejemplo: 1.2 , 2 : 1 , -3\n");
    scanf("%f,%f:%f,%f", &valor1, &valor2, &valor3, &valor4);
    resultado = (valor1 * valor3) - (valor2 * valor4);
    printf("El determinante de la matriz es: %.2f\n", resultado);
}