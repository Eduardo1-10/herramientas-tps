#include <stdio.h>

void main(){
    printf("Por favor indique el nombre y la edad de ambas personas usando el siguiente formato\n");
    printf("Eduardo Mata 28\n");
    char pNombre1[20],sNombre1[20],pNombre2[20],sNombre2[20];
    int edad1,edad2;
    printf("Ingrese el nombre y edad de la primera persona:\n");
    scanf("%s %s", pNombre1,sNombre1);
    scanf("%d", &edad1);
    printf("Ingrese el nombre y edad de la segunda persona:\n");
    scanf("%s %s", pNombre2,sNombre2);
    scanf("%d", &edad2);

    if(edad1 > edad2){
        printf("\n%s %s es mayor\n", pNombre1,sNombre1);
    }else{
        printf("\n%s %s es mayor\n", pNombre2,sNombre2);
    }
}