#include <stdio.h>

void main(){
    int val1;
    printf("Por Favor ingrese los 4 enteros presionando enter despues de cada uno:\n");
    int even = 0;
    int odd = 0;
    for(int i = 0; i<4; i++){
    scanf("%d", &val1);
        if (val1 % 2 == 0){
            even++;
        } else {
            odd++;
        }
    }
    printf("La cantidad de numeros pares es:%d\n", even);
    printf("La cantidad de numeros impares es:%d\n", odd);
}