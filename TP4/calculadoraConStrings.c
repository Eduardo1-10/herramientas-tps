#include <stdio.h>

void main(){
    float val1, val2;
    char operador;
    printf("Escriba la expresion algebraica, separando los simbolos por un enter\n");
    scanf("%f %c %f", &val1, &operador, &val2);
     
    if(operador == *"+"){
        printf("el resultado es: %.2f\n",val1 + val2); 
    } else if (operador == *"-"){
        printf("el resultado es: %.2f\n",val1 - val2);
    }else if (operador == *"*"){
        printf("el resultado es: %.2f\n",val1 * val2);
    }else if (operador == *"/"){
        printf("el resultado es: %.2f\n",val1 / val2);
    }else{
        printf("Ingrese valores validos\n");
    }
}