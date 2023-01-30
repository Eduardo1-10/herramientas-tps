#include <stdio.h>
#include <math.h> 

void main(){
    int nums[10];

    for(int i = 0; i<10; i++){
        nums[i] = pow(2,i);
    }
    for(int j = 0; j<10; j++){
        if(j == 0 ){
            printf("Elemento           Valor\n");
        }
        printf("       %d              %d\n", j, nums[j]);
    }
}