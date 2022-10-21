/* 21/10/2022
actividad_04 ALTERNATIVO: crear una estructura de registro con los siguientes campos:
struct
{
    legajo
    nota
    nombre
}
cargar 10 alumnos y mostrar los datos ordenados por nombre alfabetico
programa hecho por x_chama_x */

#include <stdio.h>
#include <string.h>
typedef struct 
{
    //Campos de la estructura
    int legajo;
    int nota;
    char nombre [10];
} datos; // Definicion de un "nuevo" tipo de datos de estructura

void cargarDatos(datos []);
void ordBurbuja(datos []);
void mostrarDatos(datos []);
int main ()
{   
    datos alumno [3]; // declaracion de una variable de tipo "datos"
    cargarDatos(alumno);
    ordBurbuja(alumno);
    mostrarDatos(alumno);
    return 0;
}

void cargarDatos(datos v[3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("ingrese el legajo del alumno %d: ",i+1);
        scanf("%d",&v[i].legajo);
        printf("ingrese el nombre del alumno %d: ",i+1);
        scanf("%s",v[i].nombre);
        printf("ingrese la nota del alumno %d: ",i+1);
        scanf("%d",&v[i].nota);
    }
}

void ordBurbuja(datos v[3])
{
    datos aux; // la defino como una variable (aux) de tipo datos --> para usar luego en --> v[j]=aux;
    for (int i = 0; i < 3-1; i++)
    {
        for (int j = 0; j < 3-i-1; j++) 
        {
            if (strcmp(v[j].nombre,v[j+1].nombre)>0) // ordenamiento de forma alfabetica
            {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
}

void mostrarDatos(datos v[3])
{
    for (int l = 0; l < 3; l++)
    {
        printf("\nlegajo alumno: %d",v[l].legajo);
        printf("\nnombre alumno: %s",v[l].nombre);
        printf("\nlegajo nota: %d\n",v[l].nota);
    }
}
