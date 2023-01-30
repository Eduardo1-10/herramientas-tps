#include <stdio.h>

void main(){

    printf("Especifique la base a la que desea transformar dicho valor\n");
    printf("Para convertir: \n");
    printf("-De decimal a hexadecimal ingrese: 1\n");
    printf("-De hexadecimal a decimal ingrese: 2\n");
    printf("-De binario a decimal y hexadecimal ingrese: 3\n");
    
    int sistemaDeNumeracion;
    scanf("%d", &sistemaDeNumeracion);

    
    int valorAConvertir = 0;

    switch (sistemaDeNumeracion)
    {
        case 1:
            scanf("%d", &valorAConvertir);    
            printf("El valor en hexadecial es: 0x%X\n", valorAConvertir);
            break;
        case 2:
            printf("El valor en decimal es: %d\n", valorAConvertir);
            break;
        case 3:
            scanf("%d", &valorAConvertir);    
            printf("El valor en decimal es: %d\n", valorAConvertir);
            printf("El valor en hexadecial es: 0x%X\n", valorAConvertir);
            break;
        default:
            printf("Algo Salio Mal...");
            break;
    }

}