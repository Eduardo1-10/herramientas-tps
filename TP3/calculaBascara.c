#include <stdio.h>
#include <complex.h>
#include <math.h>

void main(){
    float resultado1, resultado2, valor1, valor2, valor3;
    printf("Ingrese los coeficientes del polinomio de segundo grado ordenado:\n");
    scanf("%f %f %f", &valor1, &valor2, &valor3);
    
    float discriminante = pow(valor2,2) - (4 * valor1 * valor3);
    
    if (discriminante > 0){    
        float raizDiscri;
        raizDiscri = sqrt(discriminante);
        resultado1 = ((-1 * valor2) + raizDiscri ) / 2 * valor1;
        resultado2 = ((-1 * valor2) - raizDiscri ) / 2 * valor1;
        printf("Las Raices del polinomio son: X1 = %.2f y X2 = %.2f\n", resultado1, resultado2);
    }else{
        float complex raizDiscri;
        raizDiscri = csqrt(discriminante);
        float parteReal = ((-1 * valor2) / 2 * valor1);
        float parteImaginaria =  ( cimag(raizDiscri) / 2 * valor1 );
        printf("Las Raices del polinomio son: X1 = %.2f + %.2fi", parteReal, parteImaginaria);
        printf(" y X2 = %.2f + %.2fi \n", parteReal, parteImaginaria);
    }

}