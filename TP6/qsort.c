#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cmpfunc (const void * a, const void * b) {
   return (  *(int*)b - *(int*)a );
}
void main(){
    int nums[20];
    srand(time(NULL));

    for ( int i = 0; i < 20; i++){
        nums[i] = 1 + (rand() % 500);
    }
    
    printf("\nLista Original: \n");
    for( int i = 0 ; i < 20; i++ ) {   
        printf("%d ", nums[i]);
    }
    printf("\n\n");

    qsort(nums, 20, sizeof(int), cmpfunc);

    printf("\nLista Ordenada: \n");
    for( int i = 0 ; i < 20; i++ ) {   
        printf("%d ", nums[i]);
    }
    printf("\n\n");
}