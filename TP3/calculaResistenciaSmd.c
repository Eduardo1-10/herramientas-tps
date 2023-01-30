#include <stdio.h>

void main(){
    int valor1, valor2, valor3;
    printf("Ingrese los tres digitos que identifican el resistor:\n");
    scanf("%d %d %d", &valor1, &valor2, &valor3);
    int zeros = pow(10,valor3);
    int resultado = ((valor1 * 10) + valor2) * zeros;
    printf("El valor de la resistencia en Ohms es:%d \n",resultado);
}