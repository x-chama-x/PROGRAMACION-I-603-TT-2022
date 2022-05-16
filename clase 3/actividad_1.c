/* 16/05/2022
actividad_1: Guardar en una variable un nombre y apellido que ingrese el usuario 
usando cadenas de caracteres string e imprimirlo por pantalla.
programa hecho por x_chama_x */

#include <stdio.h>
#include <string.h>
int main (){
    char nombre[20];
    char apellido[20];
    printf("ingrese el nombre de usuario: ");
    gets(nombre);
    printf("ingrese el apellido de usuario: ");
    gets(apellido);
    strcat(nombre," "); // concateno con un espacio en blanco
    strcat(nombre,apellido); // le añado la cadena apellido
    printf("nombre de usuario: ");
    puts(nombre);
    return 0;
}
