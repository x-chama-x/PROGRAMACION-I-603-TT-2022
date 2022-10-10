/* 09/10/2022
TP6 ejercicio_06: Se leen números enteros positivos hasta ingresar uno negativo. Se pide mostrar el
valor máximo y las veces que se repite.
programa hecho por x_chama_x */

#include <stdio.h>
#include <time.h>
#include <stdlib.h> // para usar la funcion rand y que no aparezcan errores
void cargarVector(int,int[]);
void mostrarVector(int,int[]);
void valorMax(int,int[]);

int main()
{
    srand(time(NULL)); // funcion para generar numeros al azar
    const int comp = 5; // cargar cantidad de elementos del vector
    int v[comp];
    cargarVector(comp,v);
    mostrarVector(comp,v);
    valorMax(comp,v); // mostrar valor maximo del vector
    return 0;
}

void mostrarVector(int elementos,int vector[elementos])
{
    printf("vector: ");
    for (int i = 0; i < elementos; i++)
    {
        printf("%d, ",vector[i]);
    }
}

void cargarVector(int elementos,int vector[elementos])
{
    
    for (int j = 0; j < elementos; j++) // inicializar vector
    {
        vector[j]=0;
    }
    
    for (int i = 0; i < elementos; i++)
    {
        vector[i]=rand()%100 -50; // rand()%100 -50 --> formula que genera un numero aleatorio (incluyendo negativos)
        if (vector[i]<0)
        {
            i=elementos; // salir del bucle
        }
    }
}

void valorMax(int elementos,int vector[elementos])
{
    int Vmax=0,cantRep=0;
    for (int i = 0; i < elementos; i++)
    {
        if ((i==0)&&(vector[i]>0))
        {
            Vmax=vector[i];
            cantRep=0;
        }
        else if (vector[i]>Vmax)
        {
            Vmax=vector[i];
            cantRep=0;
        }else if (vector[i]==Vmax)
        {
            cantRep=cantRep+1;
        }
        
    }
    if (Vmax==0)
    {
        printf("\nel valor maximo es nulo");
    }else
    {
        printf("\nvalor maximo: %d",Vmax);
        printf("\nveces que se repite: %d",cantRep);
    }
    
}