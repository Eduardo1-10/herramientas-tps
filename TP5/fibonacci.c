#include <stdio.h>

void main(){
    int initValue = 0;
    int nextValue = 1;
    for (int i = 0; i < 20; i++){
        int fibValue = initValue + nextValue;
        printf("%d\n", (fibValue));
        initValue = nextValue;
        nextValue = fibValue;
    }
}