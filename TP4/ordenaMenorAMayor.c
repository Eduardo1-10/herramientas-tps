#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

void main(){
    int vals[3];
    
    printf("Por favor ingrese los tres valores separados:\n");

    scanf("%d", &vals[0]);
    scanf("%d", &vals[1]);
    scanf("%d", &vals[2]);
    
    
    qsort(vals, 3, sizeof(int), cmpfunc);

    for( int n = 0 ; n < 3; n++ ) {   
      printf("%d ", vals[n]);
    }
}
