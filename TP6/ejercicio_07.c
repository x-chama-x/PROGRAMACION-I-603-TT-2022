/* 10/10/2022
TP6 ejercicio_07: Dado un vector de 20 enteros generar otro con los mismos elementos pero sin
repeticiones.
programa hecho por x_chama_x */

#include <stdio.h>
#include <time.h>
#include <stdlib.h> // para usar la funcion rand y que no aparezcan errores
void cargarVector1(int,int []);
void cargarVector2(int,int [],int*,int []);
void mostrarVectores(int,int [],int*,int []);
int main()
{
    srand(time(NULL)); // funcion para generar numeros al azar (semilla aleatoria)
    const int comp1 = 5; // cargar cantidad de elementos del vector
    int comp2=0;
    int v1[comp1],v2[comp1];
    cargarVector1(comp1,v1);
    cargarVector2(comp1,v1,&comp2,v2);
    mostrarVectores(comp1,v1,&comp2,v2);
    return 0;
}

void cargarVector1(int elementos,int vector1[elementos])
{
    for (int i = 0; i < elementos; i++)
    {
        vector1[i]=1+rand() % 9; // 1+rand() % 9 --> formula que genera un numero aleatorio
    }
}

void cargarVector2(int elementos,int vector1[elementos],int *elementos2,int vector2[*elementos2]) // pasaje de v1 a v2 
{
    for (int i = 0; i < elementos; i++)
    {
        int esIgual = 0; //si es igual ignora y no guarda
        for (int j = 0; j < i+1; j++)
        {
            if (vector1[i]==vector2[j])
            {
                esIgual=1;
            }
        }
        if (esIgual==0) //si no es igual lo guarda
        {
            vector2[*elementos2]=vector1[i];
            *elementos2=*elementos2+1;
        }
    }
}

void mostrarVectores(int elementos,int vector1[elementos],int *elementos2,int vector2[*elementos2])
{
    printf("vector 1 = ");
    for (int i = 0; i < elementos; i++)
    {
        printf("%d, ",vector1[i]);
    }
    printf("\nvector 2 = ");
    for (int j = 0; j < *elementos2; j++)
    {
        printf("%d, ",vector2[j]);
    }  
}

