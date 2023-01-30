#include <stdio.h>
#include <string.h>

void main(){
    char input[1];
    int inputNumero = 999;
    printf("Introduzca la calificacion: ");
    scanf("%c",input);
         
    if (strcmp("A",input) == 0){
        inputNumero = 0;
    }
    if (strcmp("B",input) == 0){
        inputNumero = 1;
    }
    if (strcmp("C",input) == 0){
        inputNumero = 2;
    }
    if (strcmp("D",input) == 0){
        inputNumero = 3;
    }
    if (strcmp("F",input) == 0){
        inputNumero = 4;
    }
   
    switch(inputNumero){
        case 0:
        printf("Excelente\n");
        break;
        case 1:
        printf("Buena\n");
        break;
        case 2:
        printf("Regular\n");
        break;
        case 3:
        printf("Suficiente\n");
        break;
        case 4:
        printf("No Suficiente\n");
        break;
        default:
        printf("“No hay establecido un valor definido para el tipo de bomba”.\n");
        break;
    }
}