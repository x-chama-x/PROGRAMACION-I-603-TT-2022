/* 28/10/2022
actividad_01: archivos de texto ejemplo 1 
programa hecho por x_chama_x */
#include <stdio.h>
int main ()
{
    FILE *f; // declaracion de varibale tipo FILE --> (archivo)
    f= fopen("archivo.txt","r"); // funcion de libreria para abrir archivos  --> en este caso para lectura ("r")
    
    // detectar el fin de archivo
    char c=fgetc(f); // la variable c lee los caracteres del archivo de texto por medio de la funcion fgetc(archivo); 
    while(c!=EOF) // EOF vale NULL --> que para VS es -1
    {
        c=fgetc(f); // pregunto si el archvio llego al final
    }

    if (f==NULL) // si f==NULL --> apertura incorrecta del archivo
    {
        printf("error de apertura del archivo\n");
    }
    else
    {
            // apertura correcta del archivo 
            // se recorre el archivo para obtener informacion
    }
    fclose(f); // cerrar un archivo --> usar siempre cuando se termina de manipular un archivo

    
    return 0;
}