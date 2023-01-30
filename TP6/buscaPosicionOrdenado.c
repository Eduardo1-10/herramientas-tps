#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

void main(){
    int nums[20];
    int val;
    srand(time(NULL));

    for ( int i = 0; i < 20; i++){
        nums[i] = 1 + (rand() % 50);
    }

    printf("Ingrese el valor que desea encontrar en el arreglo: ");
    scanf("%d", &val);

    for ( int i = 0; i < 20; i++){
        if(nums[i] == val){
            printf("La posicion del valor es: %d \n", i);
            return;
        }
    }
    
    printf("El numero ingresado no se encontro en el arreglo\n");
}