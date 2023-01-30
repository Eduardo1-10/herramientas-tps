#include <stdio.h>

void main(){
    float temperatura = 0;
    float temperaturaAcumulada = 0;
    printf("Ingrese una a una las temperaturas\n");
    printf("Para terminar el programa ingrese el valor -100\n");
    int cantidadDeIngresos = 0 ;
    do{
        cantidadDeIngresos++;
        printf("Ingrese la temperatura %d: ", cantidadDeIngresos);
        scanf("%f",&temperatura);
        if(temperatura != -100){
            temperaturaAcumulada += temperatura;
        } 
    }while(temperatura != -100);
    printf("El rpomedio de la clase es: %.2f\n", temperaturaAcumulada / cantidadDeIngresos );
}