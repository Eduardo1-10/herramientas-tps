#include <stdio.h>
#include <string.h>

void main(){
    char cadenaDeCaracteres[20];

    scanf("%s", cadenaDeCaracteres);

    for(int i = 0; i<20;i++){
        printf("%c\n",cadenaDeCaracteres[i]);
    }
   
}