#include <stdio.h>

void main(){
    int nota = 0;
    float notaAcumulada = 0;
    printf("Ingrese una a una las notas de los 25 alumnos\n");
    for (int i = 0; i < 25; i++){
        printf("Ingrese la nota del alumno %d: ", i + 1);
        scanf("%d",&nota);
        notaAcumulada += nota;
    }
    printf("El rpomedio de la clase es: %.2f\n", notaAcumulada / 25 );
}