/* 07/01/2023
TP7 ejercicio_02: Se tiene un archivo de texto guardado con el nombre “Mitexto.txt”, se pide
desarrollar un algoritmo que genere una copia del mismo con el nombre
“MitextoNuevo”, pero en mayúsculas.
programa hecho por x_chama_x */
#include <stdio.h>
#include<ctype.h>
int main ()
{
    FILE *f; // archivo original
    FILE *f2; // copia del archivo
    char c,c2;
    f = fopen("Mitexto.txt","r");
    f2 = fopen("MitextoNuevo.txt","w");
    if (f==NULL) // si f==NULL --> apertura incorrecta del archivo
    {
        printf("error de apertura del archivo\n");
    }else
    {
        while(c!=EOF){
            c = getc(f); //se obtiene cada caracter del primer archivo.
            putc(toupper(c),f2);// se coloca caracter a caracter en el segundo archivo. 
            // toupper(c) --> Convertir carácter a mayúsculas.
        }
    }
    fclose(f); fclose(f2);
    f2 = fopen("MitextoNuevo.txt","r");
    if (f2==NULL) // si f==NULL --> apertura incorrecta del archivo
    {
        printf("error de apertura del archivo 2\n");
    }else
    {
        while (c2!=EOF)  // se comprueba que el segundo archivo contenga una copia de lo que hay en el primero.
        {
            c2 = getc(f2);
            printf("%c",c2);
        }
    }
    return 0;
}