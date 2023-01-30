#include <stdio.h>

void main(){
    float valorAConvertir;
    printf("Ingrese el valor en celcius que desea convertir:");
    scanf("%f",&valorAConvertir);
    
    float valorEnFarenheit = 0;
    valorEnFarenheit = (1.8 * valorAConvertir) + 32;

    printf("El Valor en farenheit es: %.2f \n", valorEnFarenheit); 
}