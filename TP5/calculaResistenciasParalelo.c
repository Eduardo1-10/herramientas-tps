#include <stdio.h>

void main(){
    float valorResistencia;
    float resitenciaAcum = 0;
        do{
            printf("Ingrese el de las resistencias una a una: ");
            scanf("%f",&valorResistencia);
            if(valorResistencia != -1){
                resitenciaAcum += (1 / valorResistencia);
            }
        }while(valorResistencia != -1);

    printf("El resultado del factorial es: %.2f\n", 1 / resitenciaAcum);
}