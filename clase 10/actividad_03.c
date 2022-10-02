/* 30/09/2022
actividad_03: leer una palabra y mostrarlaa deletreada
programa hecho por x_chama_x */

#include <stdio.h>
#include <string.h>
void leerPalabra (char[]);
int main (){
    char palabra [20];
    printf("ingrese una palabra: ");
    gets(palabra);
    leerPalabra (palabra);
    return 0;
}

void leerPalabra(char x[]){
    for (int i = 0; i < strlen(x); i++) // strlen(vector) --> longitud del string
    {
        printf("%c-",x[i]);
    }
    
}