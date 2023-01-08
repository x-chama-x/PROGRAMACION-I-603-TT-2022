/* 07/01/2023
TP7 ejercicio_02: Se tiene un archivo de texto guardado con el nombre “Mitexto.txt”, se pide
desarrollar un algoritmo que genere una copia del mismo con el nombre
“MitextoNuevo”, pero en mayúsculas.
programa hecho por x_chama_x */
#include <stdio.h>
#include<ctype.h>
void copiarArchivo (FILE *f,FILE *f2);
void verificarCopia (FILE *f2); // imprimir por pantalla los caracteres del archivo copiado
int main ()
{
    FILE f; // archivo original
    FILE f2; // copia del archivo
    copiarArchivo(&f,&f2);
    verificarCopia(&f2);
    return 0;
}

void copiarArchivo(FILE *f,FILE *f2)
{
    char c;
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
}

void verificarCopia(FILE *f2)
{
    char c; // variable que almacena cada caracter
    f2 = fopen("MitextoNuevo.txt","r");
    if (f2==NULL) // si f==NULL --> apertura incorrecta del archivo
    {
        printf("error de apertura del archivo 2\n");
    }else
    {
        c = getc(f2);
        while (c!=EOF)  // se comprueba que el segundo archivo contenga una copia de lo que hay en el primero.
        {
            printf("%c",c);
            c = getc(f2);
        }
    }
    fclose(f2);
}