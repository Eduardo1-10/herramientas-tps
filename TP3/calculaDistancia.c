#include <stdio.h>
#include <math.h>

void main(){
    float distanciaRecorrida, distanciaInicial, velocidadInicial, aceleracion, tiempoEnSegundos;
    printf("Para calcular la distancia recorrida por el movil por favor ingrese:\n");
    printf("Distancia Inicial en m ");
    scanf("%f",&distanciaInicial);
    printf("Velocidad Inicial en m/s ");
    scanf("%f",&velocidadInicial);
    printf("Aceleracion en m/s^2 ");
    scanf("%f",&aceleracion);
    printf("Tiempo s ");
    scanf("%f",&tiempoEnSegundos);
    distanciaRecorrida = distanciaInicial + velocidadInicial * tiempoEnSegundos + (1.0/2.0) * aceleracion * pow(tiempoEnSegundos,2);
    printf("La distancia recorrida en metros es: "); 
    printf("%.2f\n",distanciaRecorrida);
}