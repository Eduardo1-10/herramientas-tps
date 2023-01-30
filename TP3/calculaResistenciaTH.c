#include <stdio.h>

void main(){
    char arregloDeColores[10][10] = {{"Negro"},{"Marron"},{"Rojo"},{"Naranja"},{"Amarillo"},{"Verde"},{"Azul"},{"Violeta"},{"Gris"},{"Blanco"}};
    int valor1, valor2, valor3;
    printf("Ingrese el valor de la resistencia:\n");
    scanf("%d %d %d", &valor1, &valor2, &valor3);
    char *color1 = arregloDeColores[ (int) valor1];
    char *color2 = arregloDeColores[ (int) valor2];
    char *color3 = arregloDeColores[ (int) valor3];
    printf("Los colores de la resistencia son:%s, %s, %s \n",color1,color2,color3);
}