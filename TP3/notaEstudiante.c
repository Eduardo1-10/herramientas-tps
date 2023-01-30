#include <stdio.h>

void main(){
    int nota = 0;

    printf("Ingrese la nota del estudiante:");
    scanf("%d",&nota);
    if (nota > 10 || nota < 0){
        printf("\nPor Favor Ingrese una nota valida entre 0 y 10\n");
        return;
    }
    if(nota > 7){
        printf("El estudiante esta promocionado\n");
    }else if(nota >= 5){
        printf("El estudiante esta regular\n");
    } else {
        printf("El estudiante esta libre\n");
    }
}