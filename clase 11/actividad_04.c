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
    int legajo;
    int nota;
    char nombre [10];
} datos;
int main ()
{   
    datos alumno [3];
    datos aux; // la defino como una variable (aux) del registro datos --> para usar luego en --> alumno[j]=aux;
    int i,j;
    for (int i = 0; i < 3; i++)
    {
        printf("ingrese el legajo del alumno %d: ",i+1);
        scanf("%d",&alumno[i].legajo);
        printf("ingrese el nombre del alumno %d: ",i+1);
        scanf("%s",alumno[i].nombre);
        printf("ingrese la nota del alumno %d: ",i+1);
        scanf("%d",&alumno[i].nota);
    }
    
    for (int i = 0; i < 3; i++) // ordenamiento por inserción
    {
        j=i;
        aux=alumno[i];
        while((j>0)&&(aux.nota< alumno[j-1].nota))
        {
            alumno[j]=alumno[j-1];
            j-1;
        }
        alumno[j]=aux;
    }
    for (int l = 0; l < 3; l++)
    {
        printf("\nlegajo alumno: %d",alumno[l].legajo);
        printf("\nnombre alumno: %s",alumno[l].nombre);
        printf("\nlegajo nota: %d\n",alumno[l].nota);
    }
    return 0;
}