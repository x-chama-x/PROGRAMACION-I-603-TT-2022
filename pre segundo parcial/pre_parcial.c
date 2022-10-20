/* 19/10/2022
ejercicio pre segundo parcial
programa hecho por x_chama_x */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define cantReg 3 // cantidad de datos que se van a leer del registro

typedef struct 
{
    char nombre[30];
    int legajo;
    int cantMateriasAp;
    float promCalif;
}datos;

typedef struct 
{
    int legajo;
    int cantMateriasAp;
}datos2; // punto 4.

void cargar(datos[],datos2[]); // punto 1.
void listar(datos[]); // punto 2.
int maximo(datos[]); // punto 3.
void ordenar(datos2[]); // punto 4.
float suma(datos[],int); // punto 5.
int main ()
{
    datos alumno[cantReg];
    datos2 alumno2[cantReg]; // punto 4.
    cargar(alumno,alumno2);
    listar(alumno);
    printf("alumnos con el mayor numero de materias aprobadas: ");
    
    for (int i = 0; i < cantReg; i++) // punto 3. --> mostrar x pantalla a los alumnos con mayor cant de materias aprobadas.
    {
        if (maximo(alumno)==alumno[i].cantMateriasAp)
        {
            printf("%s, ",alumno[i].nombre);
        }  
    }
    printf("\npromedio general: %.1f",suma(alumno,cantReg)/cantReg);
    ordenar(alumno2);
    return 0;
}

void cargar(datos v[cantReg], datos2 v2[cantReg])
{
    char apellido[20];
    for (int i = 0; i < cantReg; i++)
    {
        system("cls");
        printf("ingrese nombre del alumno %d: ",i+1);
        fflush(stdin);
        gets(v[i].nombre);
        system("cls");
        printf("ingrese el apellido del alumno: ");
        gets(apellido);
        strcat(v[i].nombre," "); // concateno con un espacio en blanco
        strcat(v[i].nombre,apellido); // le añado la cadena apellido
        system("cls");
        printf("ingrese legajo del alumno: ");
        scanf("%d",&v[i].legajo);
        v2[i].legajo=v[i].legajo;
        system("cls");
        printf("ingrese la cantidad de materias aprobadas: ");
        scanf("%d",&v[i].cantMateriasAp);
        v2[i].cantMateriasAp=v[i].cantMateriasAp;
        system("cls");
        printf("ingrese el promedio de calificaciones: ");
        scanf("%f",&v[i].promCalif);
        system("cls");
    }
}

void listar(datos v[cantReg])
{
    for (int i = 0; i < cantReg; i++)
    {
        printf("alumno %d: %s\n",i+1,v[i].nombre);
        printf("legajo: %d\n",v[i].legajo);
        printf("materias aprobadas: %d\n",v[i].cantMateriasAp);
        printf("prom. de calif: %.1f\n",v[i].promCalif);
    }
    
}

int maximo(datos v[cantReg])
{
    datos mayor=v[1];
    for (int  i = 0; i < cantReg; i++)
    {
        if (v[i].cantMateriasAp>mayor.cantMateriasAp)
        {
            mayor.cantMateriasAp=v[i].cantMateriasAp;
        }   
    }
    return mayor.cantMateriasAp;
}

void ordenar(datos2 v2[cantReg])
{
    int n=cantReg;
    int aux;
    int indiceMenor;
    for (int i = 0; i < n-1; i++)
    {
        indiceMenor=i;
        for (int j = i+1; j < n; j++)
        {
            if (v2[j].cantMateriasAp>v2[indiceMenor].cantMateriasAp)
                indiceMenor=j;
        }
        if (i!=indiceMenor)
        {
            aux=v2[i].cantMateriasAp;
            v2[i].cantMateriasAp=v2[indiceMenor].cantMateriasAp;
            v2[indiceMenor].cantMateriasAp=aux;
            aux=v2[i].legajo;
            v2[i].legajo=v2[indiceMenor].legajo;
            v2[indiceMenor].legajo=aux;
        } 
    }
    printf("\nlegajo  cantidad de materias aprobadas:\n");
    for (int i = 0; i < cantReg; i++)
    {
        printf("%3d %20d\n",v2[i].legajo,v2[i].cantMateriasAp);
    }
}

float suma(datos v[],int n){
    
    if (n==0)
    {
        return v[n].promCalif;
    }else 
    {
        return suma(v,n-1)+v[n].promCalif;
    }
}
