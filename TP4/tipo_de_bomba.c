#include <stdio.h>

void main(){
    int input; 
    printf("Introduzca el tipo de bomba:")
    scanf("%d",&input);
    switch(input){
        case 0:
        printf("“No hay establecido un valor definido para el tipo de bomba”.");
        break;
        case 1:
        printf("“La bomba es una bomba de agua”");
        break;
        case 2:
        printf("“La bomba es una bomba de gasolina”");
        break;
        case 3:
        printf("“La bomba es una bomba de hormigón”");
        break;
        case 4:
        printf("“La bomba es una bomba de pasta alimenticia”");
        break;
        default:
        printf("“No hay establecido un valor definido para el tipo de bomba”.");
        break;
    }
}