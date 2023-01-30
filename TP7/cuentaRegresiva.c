#include <stdio.h>
#include <time.h>
void delay1s();

void main(){
    int cuentaInit = 0;

    printf("Ingrese el valor en segundos que desea esperar: ");
    scanf("%d", &cuentaInit);
    for (int i = 0; i < cuentaInit; i++)
    {   
        delay1s();
        printf("%d\n", i);
    }   

}

void delay1s(){
    long int clockInit = clock();
    while ((clock() - clockInit) < CLOCKS_PER_SEC){}
}