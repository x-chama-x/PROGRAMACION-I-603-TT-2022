/* 14/10/2022
actividad_02: Ordenamiento por inserción ejemplo 3 --> compara el elemento mas chico con respecto al primer elemento
programa hecho por x_chama_x */

#include <stdio.h>
void ordInsercion(int []);
void mostrarVector(int []);
int main ()
{
    int m[] = {81,22,35,18};
    printf("vector antes de ordenar: ");
    mostrarVector(m);
    ordInsercion(m);
    printf("\nvector ordenado (menor a mayor): ");
    mostrarVector(m);
    return 0;
}

void ordInsercion(int datos[])
{
    int n = 4;
    int i,j,aux;
    for (int i = 0; i < n; i++)
    {
        j=i;
        aux=datos[i];
        while((j>0)&&(aux< datos [j-1]))
        {
            datos[j]=datos[j-1];
            j--;
        }
        datos[j]=aux;
    }
}

void mostrarVector(int datos[])
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",datos[i]);
    }
}