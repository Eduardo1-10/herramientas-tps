#include <stdio.h>

void main(){
    int nums[] = {37, 60, 70, 90, 14, 95, 18, 64, 27, 32};    
    for(int i = 0; i<10; i++){
        if(i == 0 ){
            printf("Elemento           Valor\n");
        }
        printf("       %d              %d\n", i, nums[i]);
    }
}