/* 08/01/2023
TP7 ejercicio_04: Sobre el archivo anterior, desarrollar un algoritmo que lea dicho archivo y cuente la
cantidad de palabras, la cantidad de líneas y la cantidad de caracteres del mismo.
Mostrar los resultados por pantalla.
programa hecho por x_chama_x */

#include <stdio.h>
#include <string.h>
void procesarArchivo(FILE *f);
int main()
{
    FILE f;
    procesarArchivo(&f);
    return 0;
}

void procesarArchivo(FILE *f)
{
    int contPalabras=0,contLineas=0,cantCaracteres=0;
    char cad [100];
    char *p;
    char c;
    f=fopen("Mitexto.txt","r");
    p = fgets(cad,100,f);
    while (p!= NULL)
    {
        for (int i = 0; i < strlen(cad); i++) //strlen(cad) --> mide el numero de caracteres de la cadena
        {
            c=cad[i];
            if ((c!=32)&&(c!='\n'))
            {
                cantCaracteres=cantCaracteres+1;
            } 
            if ((c==32)||(c==46)||(c==44)) // suma una palabra cada vez que hay un espacio,punto o coma
            {
                contPalabras=contPalabras+1;
            }
            else if (i=='\0')
            {
                contLineas=contLineas+1;
            }
        }
        contPalabras=contPalabras+1; // para detectar la ultima palabra
        p = fgets(cad,100,f);
    }
    fclose(f);
    printf("\ncantidad de palabras: %d",contPalabras);
    printf("\ncantidad de lineas: %d",contLineas);
    printf("\ncantidad de caracteres: %d",cantCaracteres);
}



