#include <stdio.h>

void main(){
    const int resultados [] = {2, 3, 5, 5, 3, 4, 4, 4, 1, 5, 2, 3, 4, 3, 3, 5, 5, 5, 2, 3};  
    int cuantosResultados = sizeof(resultados) / sizeof(int) ;    
    int valoresEsperados[5][2] = {{1,0},{2,0},{3,0},{4,0},{5,0}};
    int cuantosValoresEsperados = 5;

    for(int i = 0; i < cuantosValoresEsperados; i++){
        for (int j = 0; j < cuantosResultados; j++)
        {
            if(valoresEsperados[i][0] == resultados[j]){
                valoresEsperados[i][1] ++;
            }
        }
        
        if(i == 0){
            printf("Los resultados de la encuesta son: \n");
        }

        for(int k = 0; k < valoresEsperados[i][1]; k++){
            if(k == 0){
                printf("%d: ",valoresEsperados[i][0]);
            }
            printf("*");
        }
        printf("\n");
    }

}