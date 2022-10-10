/* 09/10/2022
TP6 ejercicio_05: Cargar en un vector los tiempos de clasificación de 60 autos. Determinar:
    a. Tiempo promedio.
    b. Nro de auto que clasificó primero.
    c. Nro de auto que clasificó último.
Nota: Crear una función para cada punto.
programa hecho por x_chama_x */

#include <stdio.h>
#include <time.h>
#include <stdlib.h> // para usar la funcion rand y que no aparezcan errores
void tiempoProm (int,int[]);
void AutoGanador (int,int[]);
void AutoPerdedor (int,int[]);
int main()
{
    srand(time(NULL)); // funcion para generar numeros al azar
    const int comp = 60;
    int v[comp];
    for (int i = 0; i < comp; i++)
    {
        v[i]=1+rand() % 9; // 1+rand() % 9 --> formula que genera un numero aleatorio
    }
    printf("vector: ");
    for (int j = 0; j < comp; j++) // mostrar vector
    {
        printf("%d, ",v[j]);
    }
    tiempoProm (comp,v);
    AutoGanador (comp,v);
    AutoPerdedor (comp,v);
    return 0;
}

void tiempoProm (int elementos,int vector[elementos]) // a. Tiempo promedio.
{
    int suma=0;
    float prom;
    for (int i = 0; i < elementos; i++)
    {
       suma=suma+vector[i];
    }
    prom=(float) suma/elementos;
    printf("\ntiempo promedio: %.2f",prom);

}

void AutoGanador (int elementos,int vector[elementos]) // b. Nro de auto que clasificó primero.
{

    int tiempoGanador=0;
    for (int i = 0; i < elementos; i++) // tiempos de clasificacion pertenecen a los elementos del vector
    {
       if (i==1)
       {
        tiempoGanador=vector[i];
       }else if (vector[i]<tiempoGanador) // se busca el elemento con el tiempo más chico
       {
        tiempoGanador=vector[i];
       }
    }
    for (int j = 0; j < elementos; j++)
    {
        if (vector[j]==tiempoGanador) // se busca la posición de ese vector
        {
            printf("\nganador: auto %d (pos)",j);
            printf(" en el tiempo: %d",tiempoGanador);
            j=elementos; // salir del bucle
        }
    }
}

void AutoPerdedor (int elementos,int vector[elementos]) // b. Nro de auto que clasificó último.
{

    int tiempoPerdedor=0;
    for (int i = 0; i < elementos; i++) // tiempos de clasificacion pertenecen a los elementos del vector
    {
       if (i==1)
       {
        tiempoPerdedor=vector[i];
       }else if (vector[i]>tiempoPerdedor) // se busca el elemento con el tiempo más alto
       {
        tiempoPerdedor=vector[i];
       }
    }
    for (int j = 0; j < elementos; j++)
    {
        if (vector[j]==tiempoPerdedor) // se busca la posición de ese vector
        {
            printf("\nperdedor: auto %d (pos)",j);
            printf(" en el tiempo: %d",tiempoPerdedor);
            j=elementos; // salir del bucle
        }
    }
}