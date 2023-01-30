#include <stdio.h>
#include <time.h>

void main(){
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("now: %02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);

    int difEntreHusosH;
    int difEntreHusosM;
    int difEntreHusosS;
    
    printf("Ingrese la diferencia entre ambos husos horarios en el siguiente formato:\n");
    printf("HH:MM:SS\n");
    printf("Se aceptan valores negativos \n");
    printf("Luego de cada valor presione enter para ingresar el siguiente \n");
    scanf("%d %d %d",&difEntreHusosH,&difEntreHusosM,&difEntreHusosS);

    int diffCalculadaH = tm.tm_hour + difEntreHusosH;
    int diffCalculadaM =  tm.tm_min + difEntreHusosM;
    int diffCalculadaS = tm.tm_sec + difEntreHusosS;  
    
    printf("La Hora Calculada es: %02d:%02d:%02d\n",diffCalculadaH,diffCalculadaM,diffCalculadaS);


}