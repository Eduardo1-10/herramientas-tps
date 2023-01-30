#include <stdio.h>
#include <ctype.h> 

void main(){
    int num1[10];
    int num2[5] = {1, 5, 9, 13, 24};
    char txt1[] = "Hola mundo";
    char txt2[10]; 

    printf("%d %d\n", num2[2], num2[4]);
    
    for(int i = 0; i<10; i++){
        scanf("%d",&num1[i]);
    }

    printf("%s\n", txt1);
    scanf("%s", txt2);

    int j = 0;
    char character; 

    while (txt2[j])
    {
        character = txt2[j]; 
        printf("%c\n", toupper(character)); 
        j++; 
    }
    
}