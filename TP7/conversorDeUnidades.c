#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float deBarAAtm(float valor);
float deAtmABar(float valor);
float deBarAPsi(float valor);
float dePsiABar(float valor);
float deAtmAPsi(float valor);
float dePsiAAtm(float valor);
float tomaValor();
void imprimeValorCalculado(char nombreValor[3],float valor);
int pausa();

void main(){
    int exitFlag = 1;
    int selection; 
    
    while(exitFlag != 0){
        system("clear");
        printf("****  Sistema de conversion de unidades  ****\n\n");
        printf("Por favor introduzca numero correspondiente al tipo de conversion que desea realizar:\n\n");
        printf("1) bar a atm\n");
        printf("2) atm a bar\n");
        printf("3) bar a psi\n");
        printf("4) psi a bar\n");
        printf("5) atm a psi\n");
        printf("6) psi a atm\n");
        printf("7) salir\n\n");

        printf("Opcion: ");
        scanf("%d", &selection);
        switch (selection)
        {
        case 1:
            imprimeValorCalculado("atm",deBarAAtm(tomaValor()));
            exitFlag = pausa();
            break;
        case 2:
            imprimeValorCalculado("bar",deAtmABar(tomaValor()));
            exitFlag = pausa();
            break;        
        case 3:
            imprimeValorCalculado("psi",deBarAPsi(tomaValor()));
            exitFlag = pausa();
            break;        
        case 4:
            imprimeValorCalculado("bar",dePsiABar(tomaValor()));
            exitFlag = pausa();
            break;        
        case 5:
            imprimeValorCalculado("psi",deAtmAPsi(tomaValor()));
            exitFlag = pausa();
            break;        
        case 6:
            imprimeValorCalculado("atm",dePsiAAtm(tomaValor()));           
            exitFlag = pausa();
            break;        
        case 7:
            exitFlag = 0;
            break;
        default:
            break;
        }
    }
    
    printf("Gracias por usar el servicio\n");
}



float deBarAAtm(float valor){
    return valor * 0.978;
}
float deBarAPsi(float valor){
    return valor * 14.5036;
}

float deAtmABar(float valor){
    return valor * 1.01325;
}
float deAtmAPsi(float valor){
    return valor * 14.69480;
}

float dePsiABar(float valor){
    return valor * 0.068948;
}
float dePsiAAtm(float valor){
    return valor * 0.068046;
}

float tomaValor(){
    float valor;
    printf("Introduzca el valor que desea convertir: ");
    scanf("%f", &valor);
    return valor;
}

void imprimeValorCalculado( char nombreValor[3], float valor){
    printf("El valor calculado es: %f%s\n", valor, nombreValor);
}

int pausa(){
    char seguir[1]; 
    printf("Desea realizar otro calculo? Y/N: ");
    scanf("%s",seguir);
    return strcmp(seguir,"N") ?  1 : 0;
}