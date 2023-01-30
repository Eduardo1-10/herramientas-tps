#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

void main(){
    int nums[20];
    int val;
    srand(time(NULL));

    for ( int i = 0; i < 20; i++){
        nums[i] = 1 + (rand() % 50);
    }
    
    qsort(nums, 20, sizeof(int), cmpfunc);

    printf("Ingrese el valor que desea encontrar en el arreglo: ");
    scanf("%d", &val);
    
    if(val > nums[0] && val < nums[19]){
        for ( int i = 0; i < 20; i++){
            if(nums[i] == val){
                printf("La posicion del valor es: %d \n", i);
                return;
            }
        }
    }

    printf("El numero ingresado no se encontro en el arreglo\n");
}