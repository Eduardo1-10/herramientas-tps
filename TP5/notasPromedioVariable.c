#include <stdio.h>

void main(){
    int nota = 0;
    float notaAcumulada = 0;
    int cantidadDeAlumnos = 0;
    int aprobados = 0;
    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d",&cantidadDeAlumnos);
    printf("Ingrese una a una las notas de todos los alumnos\n");
    for (int i = 0; i < cantidadDeAlumnos; i++){
        printf("Ingrese la nota del alumno %d: ", i + 1);
        scanf("%d",&nota);
        notaAcumulada += nota;
        if(nota > 6){
            aprobados++;
        }
    }

    printf("El rpomedio de la clase es: %.2f\n", notaAcumulada / cantidadDeAlumnos );

    printf("De los %d alumnos aprobaron %d y reprobaron %d\n", cantidadDeAlumnos, aprobados, cantidadDeAlumnos - aprobados );
}