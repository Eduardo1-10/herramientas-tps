#include <stdio.h>

void main(){
    int numero;
    int factorialCal;
    int factorial = 0;
    printf("Ingrese el numero al que le desea calcualr el factorial: ");
    scanf("%d",&numero);
    if(numero == 0){
        factorial = 1; 
    }else if(numero < 0){
        printf("El factorial de numeros negativos no esta definido\n");
        return;
    }else{
        for(int i = (numero - 1); i > 0; i--){
            factorialCal = numero * i;
            numero = i;
            factorial+= factorialCal;
        }
    }
    printf("El resultado del factorial es: %d\n", factorial);
}