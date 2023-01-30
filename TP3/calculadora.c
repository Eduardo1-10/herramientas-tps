#include <stdio.h>

void main(){
    int operacion;
    float numero1, numero2;
    float resultado;
    printf("Ingrese los numeros a operar seguidos de la operacion:\n");
    
    printf("\nIngrese el primer numero:");
    scanf("%f", &numero1);
    
    printf("\nIngrese el segundo numero:");
    scanf("%f",&numero2);
    
    printf("\nIngrese el numero correspondiente a la operacion deseada:");
    printf("\n1 - Suma \n2 - Resta\n3 - Multiplicacion\n4 - Division\n");
    scanf("%d", &operacion);


    switch (operacion)
    {
    case 1:
        resultado = numero1 + numero2;
        break;
    case 2:
        resultado = numero1 - numero2;
        break;
    case 3:
       resultado = numero1 * numero2;
        break;
    case 4:
       resultado = numero1 / numero2;
        break;
    default:
        printf("Ingrese una operacion valida\n");
        return;
        break;
    }
    printf("El resultado de la operacion es:%.2f\n",resultado);
}