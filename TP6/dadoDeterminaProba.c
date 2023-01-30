#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int lados[6][2] = {{1,0},{2,0},{3,0},{4,0},{5,0},{6,0}};
    float ladoDado;
    
    srand(time(NULL));

    for (int i = 0; i <= 1000; i++ ){
        ladoDado = 1 + (rand() % 6);
        for(int j = 0;j < 6; j++){
            if(lados[j][0] == ladoDado){
                lados[j][1]++;
            } 
        }
    }

    for(int k = 0; k<6; k++){
        printf("Lado %d => %d\n",lados[k][0],lados[k][1]);
    }
}