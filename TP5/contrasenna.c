#include <stdio.h>
#include <string.h>

void main(){
    char contra[15];
    float verificado = 0;
        do{
            printf("Ingrese la contraseña: ");
            scanf("%s",contra);
        }while(strcmp(contra,"estaEsLaContra") != 0);

    printf("Usuario verificado\n");
}