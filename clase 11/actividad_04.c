/* 14/10/2022
actividad_04: crear una estructura de registro con los siguientes campos:
struct
{
    legajo
    nota
    nombre
}

cargar 10 alumnos y mostrar los datos ordenados por nota ascendente
programa hecho por x_chama_x */

#include <stdio.h>
typedef struct 
{
    //Campos de la estructura
    int legajo;
    int nota;
    char nombre [10];
} datos; // Definicion de un "nuevo" tipo de datos de estructura

void cargarDatos(datos []);
void ordInsercion(datos []);
void mostrarDatos(datos []);
int main ()
{   
    datos alumno [3]; // declaracion de una variable de tipo "datos"
    cargarDatos(alumno);
    ordInsercion(alumno);
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

void ordInsercion(datos v[3])
{
    datos aux; // la defino como una variable (aux) de tipo datos --> para usar luego en --> v[j]=aux;
    int i,j;
    for (int i = 0; i < 3; i++) // ordenamiento por inserción
    {
        j=i;
        aux=v[i];
        while((j>0)&&(aux.nota< v[j-1].nota))
        {
            v[j]=v[j-1];
            j-1;
        }
        v[j]=aux;
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