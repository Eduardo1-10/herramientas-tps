#include <stdio.h>

void main(){
    int verticeY1 = 1;
    int verticeY2 = 5;
    int verticeX1 = 2;
    int verticeX2 = 4;

    int coorX, coorY;

    printf("Ingrese las coordenadas a comparar en formato par ordenado, sin parentesis.\n");
    scanf("%d,%d", &coorX, &coorY);
    
    int resultadoX1 = coorX - verticeX1;
    int resultadoX2 = coorX - verticeX2;
    int resultadoY1 = coorY - verticeY1;
    int resultadoY2 = coorY - verticeY2;
    
int rangoY = 0;
int perimetroY = 0;
    if(resultadoY1 > 0 && resultadoY2 < 0){
        //esta dentro del rangoY
        rangoY = 1;
    }else if(resultadoY1 == 0 || resultadoY2 == 0){
        //esta en el perimetroY
        perimetroY = 1;
    }

    if(resultadoX1 > 0 && resultadoX2 < 0 && rangoY){
        //esta dentro del rango
        printf("El punto esta dentro del rectangulo\n");
        return;
    }else if((resultadoX1 == 0 || resultadoX2 == 0) && (rangoY == 1 || perimetroY ==1)){
        //esta dentro del perimetroX
        printf("El punto esta dentro del perimetro\n");
        return;
    }
    
    printf("El punto esta fuera del rectangulo \n");
    return;
}