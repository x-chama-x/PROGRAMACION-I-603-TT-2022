/* 11/01/2023
TP7 ejercicio_07: Desarrollar un algoritmo que lea un archivo de texto que contiene un número entero
por renglón. Muestra por pantalla el promedio y los valores del máximo y el mínimo
respectivamente.
programa hecho por x_chama_x */

#include <stdio.h>
#include <stdlib.h>
void promDatos();
void valMaxMin();
int main()
{
    promDatos();
    valMaxMin();
    return 0;
}

void promDatos()
{
    FILE *f;
    float prom;
    char *p;
    char cad [6]; // cadena de caracteres del archivo que incluyen el \0 y el \n
    char c;
    int num,cant=0; // cant --> cantidad de numeros en el archivo
    f=fopen("numEntero.txt","r");
    if (f==NULL) // si f==NULL --> apertura incorrecta del archivo
    {
        printf("error de apertura del archivo\n");
    }else
    {
        p = fgets(cad,6,f);
        while (p!= NULL)
        {
            cant=cant+1;
            num = atoi(cad); // atoi(char) Convierte una cadena a su valor numérico (entero)
            p = fgets(cad,6,f);
            prom=prom+num;
        }
    }
    printf("promedio: %.1f",prom/cant);
    fclose(f);
}

void valMaxMin()
{
    FILE *f;
    char *p;
    char cad [6]; // cadena de caracteres del archivo que incluyen el \0 y el \n
    char c;
    int num,max,min;
    f=fopen("numEntero.txt","r");
    if (f==NULL) // si f==NULL --> apertura incorrecta del archivo
    {
        printf("error de apertura del archivo\n");
    }else
    {
        p = fgets(cad,6,f);
        min=num;
        max=num;
        while (p!= NULL)
        {
            num = atoi(cad); // atoi(char) Convierte una cadena a su valor numérico (entero)
            if (num>max)
            {
                max=num;
            }else if (num<min)
            {
                min=num;
            }
            p = fgets(cad,6,f);
        }
        printf("\nmax: %d\n",max);
        printf("min: %d",min);
    }
    fclose(f);
}