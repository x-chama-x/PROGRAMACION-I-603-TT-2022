/* 06/01/2023
TP7 ejercicio_01: Se tiene un archivo llamado “Prueba.txt”, leerlo y mostrarlo por pantalla. Carácter a
carácter.
programa hecho por x_chama_x */

#include <stdio.h>
int main ()
{
    FILE *f;
    int c; // caracter a leer
    f = fopen("Prueba.txt","r");
    if (f==NULL) // si f==NULL --> apertura incorrecta del archivo
    {
        printf("error de apertura del archivo\n");
    }else
    {
        c=fgetc(f);
        while(c!=EOF) 
        {
            printf("%c",c);
            printf("\n");
            c=fgetc(f); 
        }
    }
    fclose(f);
    return 0;
}