/* 14/10/2022
actividad_01: Ordenamiento Burbuja ejemplo 1 
--> intercambia el elemento de la posicion siguiente, con el elemento de la posicion actual
programa hecho por x_chama_x */
#include <stdio.h>

void ordBurbuja(int []);
void mostrarVector(int []);
int main ()
{
    int m[] = {81,22,35,18};
    printf("vector antes de ordenar: ");
    mostrarVector(m);
    ordBurbuja(m);
    printf("\nvector ordenado (menor a mayor): ");
    mostrarVector(m);
    return 0;
}

void ordBurbuja(int datos[])
{
    int aux;
    int n = 4;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++) 
        {
            if (datos[j]>datos[j+1])
            {
                aux=datos[j];
                datos[j]=datos[j+1];
                datos[j+1]=aux;
            }
        }
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