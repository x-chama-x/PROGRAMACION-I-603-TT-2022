/* 09/10/2022
TP6 ejercicio_04: Cargar un vector de n componentes y a través de funciones indicar:
    a. Cantidad de elementos positivos.
    b. Cantidad de negativos.
    c. Cantidad de ceros.
programa hecho por x_chama_x */

#include <stdio.h>
#include <time.h>
#include <stdlib.h> // para usar la funcion rand y que no aparezcan errores
void cantPos(int,int[]);
void cantNeg(int,int[]);
void cantCeros(int,int[]);
int main ()
{
    const int comp = 5; // ingresar cualquier cantidad de elementos
    int v[comp];
    srand(time(NULL)); // funcion para generar numeros al azar

    for (int i = 0; i < comp; i++) // cargar vector
    {
        v[i]=rand()%100 -50; // rand()%100 -50 --> formula que genera un numero aleatorio (incluyendo negativos)
    }
    
    printf("vector: ");
    for (int j = 0; j < comp; j++) // mostrar vector
    {
        printf("%d, ",v[j]);
    }
    cantPos(comp,v);
    cantNeg(comp,v);
    cantCeros(comp,v);
    return 0;
}

void cantPos(int elementos,int vector[elementos])
{
    int cantidad=0;
    for (int i = 0; i < elementos; i++)
    {
        if (vector[i]>0)
        {
            cantidad=cantidad+1;
        } 
    } printf("\ncantidad de elementos positivos: %d",cantidad);
    
}

void cantNeg(int elementos,int vector[elementos])
{
    int cantidad=0;
    for (int i = 0; i < elementos; i++)
    {
        if (vector[i]<0)
        {
            cantidad=cantidad+1;
        } 
    } printf("\ncantidad de elementos negativos: %d",cantidad);
    
}

void cantCeros(int elementos,int vector[elementos])
{
    int cantidad=0;
    for (int i = 0; i < elementos; i++)
    {
        if (vector[i]==0)
        {
            cantidad=cantidad+1;
        } 
    } printf("\ncantidad de ceros: %d",cantidad);
    
}

